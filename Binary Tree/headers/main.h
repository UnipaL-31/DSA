#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

int is_empty(Node* root);
void print_tree(Node* root);
Node* create_node(int data);
Node* delete(Node* root, int x);
Node* search_node(Node* root, int key);
Node* insert_node(Node* node, int value);
void postOrder(Node* root);
void inOrder(Node* root);
void preOrder(Node* root);
Node* findMin(Node* root);