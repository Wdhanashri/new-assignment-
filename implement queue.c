#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the queue

// Structure for queue
struct Queue {
    int front, rear;
    int arr[MAX];
};

// Function to initialize the queue
void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    return q->rear == MAX - 1;
}

// Function to add an element to the queue (enqueue)
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    
    if (isEmpty(q)) {
        q->front = 0;  // Set front to 0 when inserting the first element
    }
    
    q->arr[++q->rear] = value;
    printf("Enqueued %d into the queue.\n", value);
}

// Function to remove an element from the queue (dequeue)
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;  // Return -1 to indicate error
    }
    
    int removedValue = q->arr[q->front];

    // If only one element was left, reset queue
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }

    return removedValue;
}

// Function to get the front element of the queue
int peek(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! No front element.\n");
        return -1;
    }
    return q->arr[q->front];
}

// Function to display queue elements
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

// Main function to test queue operations
int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);  // Overflow case

    display(&q);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    printf("Front element: %d\n", peek(&q));

    display(&q);

    return 0;
}
