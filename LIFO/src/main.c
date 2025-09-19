#include "../headers/main.h"

/*
    Author: Sebastiano D'Angelo
*/

int main(){
    node* stack = NULL;
    
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);

    printf("%s", "Stack: ");
    printStack(&stack);

    pop(&stack);
    pop(&stack);

    printf("%s", "\nStack after 2 pops: ");
    printStack(&stack);

    return 0;
}

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if(newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int insertBeforeHead(node** head, int data) {
    node* newNode = createNode(data);
    if(!newNode) return -1;
    if(*head == NULL) {
        *head = newNode;
        return 0;
    }
    newNode->next = *head;
    *head = newNode;
    return 0;
}

int deleteHead(node** head) {
    node* tmp = *head;
    *head = (*head)->next;
    free(tmp);
    return 0;
}

int isEmpty(node** stack) {
    return *stack == NULL;
}

void push(node** stack, int data) {
    if(insertBeforeHead(stack, data)) {
        puts("Stack Overflow!");
    }
}

int pop(node** stack) {
    if(isEmpty(stack)) {
        puts("Stack Underflow!");
        return -1;
    }
    deleteHead(stack);
    return 1;
}

int peek(node** stack) {
    if(!isEmpty(stack)) {
        return (*stack)->data;
    } else {
        return -1;
    }
}

void printStack(node** stack) {
    node* tmp = *stack;
    while(tmp != NULL) {
        printf("%d-> ", tmp->data);
        tmp = tmp->next;
    }
    puts("");
}