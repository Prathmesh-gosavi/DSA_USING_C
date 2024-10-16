#include "dyqueue.h"

// Initialize the queue
void init(struct Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Add an element to the queue
void AddQueue(struct Queue* q, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
        newNode->next = newNode; // Point to itself (circular)
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        q->rear->next = q->front; // Maintain circular structure
    }
}

// Peek the front element of the queue
int peek(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value
    }
    return q->front->data;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == NULL;
}
