#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct Queue {
    node* front;
    node* rear;
} queue;

queue* createQueue();
int deleteQueue(queue* q);
node* createNode(int data);
void enqueue(queue* q, int data);
int dequeue(queue* q);
int isEmpty(queue* q);
int peek(queue* q);
void printQueue(queue* q);