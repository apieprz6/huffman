#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"


int main(int argc, char* argv[]) 
{
	if(argc != 5 && argc != 4){
		return EXIT_FAILURE;
	}
	if(argv[1] != 0 && argv[1][0] == '-' && argv[1][1] == 'c' && argc == 5){
		FILE* inputFile = fopen(argv[2], "r");
		FILE* outHuffmanCodes = fopen(argv[3], "w");
		FILE* outUncompressedFile = fopen(argv[4], "w");
		if(ferror(inputFile)){
			printf("ERROR OPENING FILE\n");
			return EXIT_FAILURE;
		}
		
		Node* head = generateHuffmanTreeChar(inputFile);
		if(head == NULL){
			printf("FAILURE DUE TO INVALID HEADER\n");
			return EXIT_FAILURE;
		}
		printEncodings(head, outHuffmanCodes);
		bool functionCorrect = decodeAndOutput(inputFile, outUncompressedFile, head);
		if(!functionCorrect){
			printf("FAILURE DUE TO CORRUPT FILE");
			return EXIT_FAILURE;
		}
		
		fclose(inputFile);
		fclose(outHuffmanCodes);
		fclose(outUncompressedFile);
		destroyNode(head);
	}
	else if(argv[1] != 0 && argv[1][0] == '-' && argv[1][1] == 'b' && argc == 4){
		FILE* inputFile = fopen(argv[2], "r");
		FILE* outUncompressedFile = fopen(argv[3], "w");
		Node* head = generateHuffmanTreeBit(inputFile);
		if(head == NULL){
			printf("FAILURE DUE TO INVALID HEADER\n");
			return EXIT_FAILURE;
		}
		//printEncodings(head, outUncompressedFile);
		bool functionCorrect = decodeAndOutput(inputFile, outUncompressedFile, head);
		if(!functionCorrect){
			printf("FAILURE DUE TO CORRUPT FILE");
			return EXIT_FAILURE;
		}
		
		fclose(inputFile);
		fclose(outUncompressedFile);
		destroyNode(head);
	}
	else{
		printf("INVALID INPUT CONDITIONS\n");
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
