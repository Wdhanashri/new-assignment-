#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++; // Increment the current digit
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0; // Set to 0 if it's 9
    }

    // If all digits were 9, we need an extra digit at the front
    int* newDigits = (int*)malloc((digitsSize + 1) * sizeof(int));
    newDigits[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        newDigits[i] = 0;
    }
    
    *returnSize = digitsSize + 1;
    return newDigits;
}

// Testing the function
int main() {
    int digits1[] = {1, 2, 3};
    int returnSize;
    int* result1 = plusOne(digits1, 3, &returnSize);

    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result1[i]);
        if (i < returnSize - 1) printf(",");
    }
    printf("]\n");

    int digits2[] = {9, 9, 9};
    int* result2 = plusOne(digits2, 3, &returnSize);

    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result2[i]);
        if (i < returnSize - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
