#include "huffman.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Tree *_makeTree(unsigned char ch, long int value, Tree* left, Tree* right);
void _encodingHelper(Tree* top, FILE* output, long int count, char* encodingString);
Node* _stack_push(Node **stack, const void *new_object);
Node* _stack_pop(Node **stack);
void _destroyTreeHelper(Tree* top);
void _destroyTree(void* tree);
unsigned char _getValue(int* informationLeftInByte, unsigned char* currentByte, int* currentBit, FILE* input, long int* bytesInHeaderCount);
unsigned char _addToBuffer(unsigned char buffer, int* lengthOfBuffer, unsigned char additionToBuffer, int lengthOfAddition);

bool decodeAndOutput(FILE* input, FILE* output, Node* head){//head is the top of the huffman tree
	fseek(input, 0, SEEK_SET);//resetting file position
	
	long int numberOfCharInFile = 0;
	fread(&numberOfCharInFile, sizeof(long int), 1, input);
	long int numCharInHeader = 0;
	fread(&numCharInHeader, sizeof(long int), 1, input);
	long int totalCharInUncompressed = 0;
	fread(&totalCharInUncompressed, sizeof(long int), 1, input);
	
	fseek(input, sizeof(unsigned char) * numCharInHeader, SEEK_CUR);//skipping header info
	Node* currentNode = malloc(sizeof(*currentNode));
	currentNode -> next = NULL;
	currentNode -> ptr = head -> ptr;
	int characterCount = 0;
	long int compressedCharacterCount = 0;
	
	while(true){
		unsigned char currentByte = fgetc(input);
		if(feof(input)){
			break;
		}
		compressedCharacterCount++;
		for(int bitMarker = 7; bitMarker >= 0; bitMarker--){
			if(characterCount != totalCharInUncompressed){
				unsigned char currentBit = currentByte << (7-bitMarker);
				currentBit = currentBit >> 7;
				if((int)currentBit == 0){
					currentNode -> ptr = (void*)(((Tree*)(currentNode -> ptr)) -> left);
				}
				else{
					currentNode -> ptr = (void*)(((Tree*)(currentNode -> ptr)) -> right);
				}
				if(((Tree*)(currentNode -> ptr)) -> left == NULL){
					fputc(((Tree*)(currentNode -> ptr)) -> character, output);
					characterCount++;
					currentNode -> ptr = head -> ptr;
				}
			}
			else{
				char endOfFileCheck = fgetc(input);
				if(endOfFileCheck != EOF){
					return false;
				}
				break;
			}
		}
		
	}
	if(compressedCharacterCount != (numberOfCharInFile - numCharInHeader - 3*sizeof(long int))){
		//printf("Compressed character count: %ld\n", compressedCharacterCount);
		//printf("header info: %ld\n", numberOfCharInFile - numCharInHeader - 3*sizeof(long int));
		return false;
	}
	
	free(currentNode);
	return true;
}

Node* generateHuffmanTreeBit(FILE* input){
	fseek(input, 0, SEEK_SET);//resetting file position
	
	long int numberOfCharInFile = 0;
	fread(&numberOfCharInFile, sizeof(long int), 1, input);
	long int numCharInHeader = 0;
	fread(&numCharInHeader, sizeof(long int), 1, input);
	long int totalCharInUncompressed = 0;
	fread(&totalCharInUncompressed, sizeof(long int), 1, input);
	
	fseek(input, 3*sizeof(long int), SEEK_SET);
	
	int elementsInStack = 0;
	long int bytesInHeader = 0;
	
	Node* head = NULL;
	Node** stack = &head;
	
	unsigned char currentByte = fgetc(input);
	bytesInHeader++;
	int currentBit = 0;
	int informationLeftInByte = 8;//keeps track of how much information is left in byte
	
	unsigned char value = _getValue(&informationLeftInByte, &currentByte, &currentBit, input, &bytesInHeader);
	if((int)currentBit != 1){//first bit has to be a 1
		return NULL;
	}
	
	while(elementsInStack != 1 || (int)currentBit != 0){
		if((int)currentBit == 1){
			Tree* tree = _makeTree(value, 0, NULL, NULL);
			head = _stack_push(stack, tree);
			elementsInStack++;
		}
		else if((int)currentBit == 0){
			Node* rightNode = _stack_pop(stack);
			Node* leftNode= _stack_pop(stack);
			Tree* right = (Tree*)(rightNode -> ptr);
			Tree* left = (Tree*)(leftNode -> ptr);
			elementsInStack -= 2;
			Tree* tree = _makeTree('\0', 0, left, right);
			head = _stack_push(stack, tree);
			elementsInStack++;
			
			free(rightNode);
			free(leftNode);
		}
		else{
			return NULL;
		}
		value = _getValue(&informationLeftInByte, &currentByte, &currentBit, input, &bytesInHeader);
	}
	
	if(bytesInHeader != numCharInHeader){
		return NULL;
	}
	
	return head;
}

unsigned char _getValue(int* informationLeftInByte, unsigned char* currentByte, int* currentBit, FILE* input, long int* bytesInHeaderCount){
	if(*informationLeftInByte == 0){
		*currentByte = fgetc(input);
		*bytesInHeaderCount = *bytesInHeaderCount + 1;
		*informationLeftInByte = 8;
	}
	unsigned char newCurrentBit = *currentByte << (8 - *informationLeftInByte);
	newCurrentBit = newCurrentBit >> 7;
	*informationLeftInByte = *informationLeftInByte - 1;
	*currentBit = (int)newCurrentBit;
	unsigned char buffer = 0;
	
	if(*currentBit == 1){
		buffer = 0x00;
		int lengthOfBuffer = 0;
		int bitsStillNeeded = 8 - *informationLeftInByte;
		buffer = _addToBuffer(buffer, &lengthOfBuffer, *currentByte, *informationLeftInByte);
		*currentByte = fgetc(input);
		*bytesInHeaderCount = *bytesInHeaderCount + 1;
		unsigned char additionToBuffer = (*currentByte << (bitsStillNeeded - 1)) >> 7;
		buffer = _addToBuffer(buffer, &lengthOfBuffer, additionToBuffer, bitsStillNeeded);
		*informationLeftInByte = 8 - bitsStillNeeded;
	}
	
	return buffer;
	
}

unsigned char _addToBuffer(unsigned char buffer, int* lengthOfBuffer, unsigned char additionToBuffer, int lengthOfAddition){//additionToBuffer stores significant info at least significant bit if not size 8
	int spaceLeftInBuffer = 8 - *lengthOfBuffer;
	additionToBuffer = additionToBuffer << (spaceLeftInBuffer - lengthOfAddition);
	buffer = buffer | additionToBuffer;
	*lengthOfBuffer += lengthOfAddition;

	return buffer;
}

Node* generateHuffmanTreeChar(FILE* input){
	fseek(input, 0, SEEK_SET);//resetting file position
	
	long int numberOfCharInFile = 0;
	fread(&numberOfCharInFile, sizeof(long int), 1, input);
	long int numCharInHeader = 0;
	fread(&numCharInHeader, sizeof(long int), 1, input);
	long int totalCharInUncompressed = 0;
	fread(&totalCharInUncompressed, sizeof(long int), 1, input);
	
	fseek(input, 3*sizeof(long int), SEEK_SET);
	
	int elementsInStack = 0;
	long bytesInHeader = 0;
	
	Node* head = NULL;
	Node** stack = &head;
	
	unsigned char currentElement = fgetc(input);
	bytesInHeader++;
	while(elementsInStack != 1 || currentElement != '0'){
		if(currentElement == '1'){
			unsigned char value = (unsigned char)fgetc(input);
			bytesInHeader++;
			Tree* tree = _makeTree(value, 0, NULL, NULL);
			head = _stack_push(stack, tree);
			elementsInStack++;
		}
		else if(currentElement == '0'){
			Node* rightNode = _stack_pop(stack);
			Node* leftNode= _stack_pop(stack);
			Tree* right = (Tree*)(rightNode -> ptr);
			Tree* left = (Tree*)(leftNode -> ptr);
			elementsInStack -= 2;
			Tree* tree = _makeTree('\0', 0, left, right);
			head = _stack_push(stack, tree);
			elementsInStack++;
			
			free(rightNode);
			free(leftNode);
		}
		else{
			return NULL;
		}
		currentElement = fgetc(input);
		bytesInHeader++;
	}
	
	if(bytesInHeader != numCharInHeader){
		//printf("Bytes in header(counted by program): %ld\n", bytesInHeader);
		//printf("Bytes in header(stored info): %ld\n", numCharInHeader);
		return NULL;
	}
	
	return head;
}

Node* _stack_push(Node **stack, const void *new_object){
	if(new_object == NULL){
		return NULL;
	}
	Node* newNode = malloc(sizeof(*newNode));
	newNode -> ptr = (void*)new_object;
	if(newNode -> ptr == NULL){
		return NULL;
	}
	newNode -> next = *stack;
	*stack = newNode;
	return newNode;
}

Node* _stack_pop(Node **stack){
	if(*stack == NULL){
		return NULL;
	}
	Node* popNode = *stack;
	*stack = (*stack) -> next;
	popNode -> next = NULL;
	
	return popNode;
}

Tree *_makeTree(unsigned char ch, long int value, Tree* left, Tree* right){
	Tree* newTree = malloc(sizeof(*newTree));
	newTree -> character = ch;
	newTree -> value = value;
	newTree -> left = left;
	newTree -> right = right;

	return newTree;
}

void printEncodings(Node* head, FILE* output){
	char* encodingString = malloc(sizeof(encodingString) * 256);
	Tree* top = (Tree*)(head -> ptr);
	long int count = 0;
	_encodingHelper(top, output, count, encodingString);
	
	free(encodingString);
	
	return;
}

void _encodingHelper(Tree* top, FILE* output, long int count, char* encodingString){
	if(top -> left == NULL){
		fprintf(output, "%c:%s\n", top -> character, encodingString);
	}
	else{
		encodingString[count] = '0';
		encodingString[count + 1] = '\0';
		_encodingHelper(top -> left, output, count+1, encodingString);
		encodingString[count] = '1';
		_encodingHelper(top -> right, output, count+1, encodingString);
		encodingString[count] = '\0';
	}
	return;
}

void destroyNode(Node *list)
{
	if(list -> next == NULL){
		_destroyTree(list -> ptr);
	}
	else{
		destroyNode(list -> next);
		_destroyTree(list -> ptr);
	}
	free(list);
	
	return;
}

void _destroyTree(void* tree){
	Tree* top = (Tree*)(tree);
	_destroyTreeHelper(top);
}

void _destroyTreeHelper(Tree* top){
	if(top -> left != NULL || top -> right != NULL){
		_destroyTreeHelper(top -> left);
		_destroyTreeHelper(top -> right);
	}
	free(top);
	
	return;
}