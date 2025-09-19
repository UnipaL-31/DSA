#include "../headers/main.h"

/*
    Author: Sebastiano D'Angelo
*/

int main(){
    queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    printf("Queue: ");
    printQueue(queue);
    
    dequeue(queue);
    dequeue(queue);

    printf("Queue: ");
    printQueue(queue);

    if(deleteQueue(queue) == 1) {
        puts("The queue has been deleted successfully.");
    }

    return 0;
}

queue* createQueue() {
    queue* newQueue = (queue*)malloc(sizeof(queue));

    newQueue->front = newQueue->rear = NULL;
    return newQueue;
}

int deleteQueue(queue* q) {
    while(!isEmpty(q)) {
        dequeue(q);
    }
    free(q);
    return 1;
}

node* createNode(int data) {
    // Allocate memory for a new node
    node* newNode = (node*)malloc(sizeof(node));
    // Check if memory allocation was successful
    if (newNode == NULL)
        return NULL;
    // Initialize the node's data and next pointer
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(queue* q, int data) {
    // Create a new node with the given data
    node* newNode = createNode(data);
    // Check if memory allocation for the new node was
    // successful
    if (!newNode) {
        printf("Queue Overflow!\n");
        return;
    }
    // If the queue is empty, set the front and rear
    // pointers to the new node
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    // Add the new node at the end of the queue and update
    // the rear pointer
    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(queue* q) {
    // Check if the queue is empty
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    // Store the front node and update the front pointer
    node* temp = q->front;
    q->front = q->front->next;
    // If the queue becomes empty, update the rear pointer
    if (q->front == NULL)
        q->rear = NULL;
    // Store the data of the front node and free its memory
    int data = temp->data;
    free(temp);
    return data;
}

int isEmpty(queue* q) {
    // Check if the front pointer is NULL
    return q->front == NULL;
}

int peek(queue* q) {
    // Check if the queue is empty
    if (isEmpty(q))
        return -1;
    // Return the data of the front node
    return q->front->data;
}

void printQueue(queue* q) {
    // Traverse the queue and print each element
    node* temp = q->front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}