#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* createNode(int data);
int insertBeforeHead(node** head, int data);
int deleteHead(node** head);
int isEmpty(node** stack);
void push(node** stack, int data);
int pop(node** stack);
int peek(node** stack);
void printStack(node** stack);