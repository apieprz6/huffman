#ifndef HUFFMAN_H
#define HUFFMAN_H 
#include <stdio.h>
#include <stdbool.h>

typedef struct _Node {
   void *ptr;
   struct _Node *next;
} Node;

typedef struct _Tree {
   unsigned char character;
   long int value;
   struct _Tree *left;
   struct _Tree *right;
} Tree;

Node* generateHuffmanTreeChar(FILE* input);
void printEncodings(Node* head, FILE* output);
void destroyNode(Node *list);
bool decodeAndOutput(FILE* input, FILE* output, Node* head);
Node* generateHuffmanTreeBit(FILE* input);

#endif
