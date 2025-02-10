#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of stack

// Stack Structure
struct Stack {
    int top;
    int arr[MAX];
};

// Function to initialize the stack
void initStack(struct Stack* s) {
    s->top = -1;  // Stack is initially empty
}

// Function to check if stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Function to check if stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Function to push an element into the stack
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->arr[++s->top] = value;
    printf("Pushed %d into the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;  // Return -1 to indicate error
    }
    return s->arr[s->top--];
}

// Function to get the top element of the stack
int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! No top element.\n");
        return -1;
    }
    return s->arr[s->top];
}

// Function to display stack elements
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

// Main function to test stack operations
int main() {
    struct Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    push(&s, 60);  // Overflow case

    display(&s);

    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));

    printf("Top element: %d\n", peek(&s));

    display(&s);

    return 0;
}
