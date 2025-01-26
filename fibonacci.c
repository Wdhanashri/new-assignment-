#include <stdio.h>
#include <stdlib.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to generate and store the Fibonacci sequence in a dynamically allocated array
int* generateFibonacciSequence(int n) {
    int* sequence = (int*)malloc(n * sizeof(int)); // Dynamically allocate memory for the sequence
    if (sequence == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        sequence[i] = fibonacci(i); // Store Fibonacci numbers in the array
    }

    return sequence; // Return the pointer to the array
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int* fibSequence = generateFibonacciSequence(n); // Generate the sequence

    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(fibSequence + i)); // Print using pointer arithmetic
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(fibSequence);

    return 0;
}
