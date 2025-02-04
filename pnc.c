#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getPermutation(int n, int k) {
    int fact[10]; // Factorial array
    int used[10] = {0}; // To track used numbers
    char* result = (char*)malloc((n + 1) * sizeof(char));
    result[n] = '\0'; // Null-terminate the string

    // Precompute factorials
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }

    k--; // Convert k to 0-based index

    for (int i = 0; i < n; i++) {
        int index = k / fact[n - 1 - i]; // Determine which number to pick
        k %= fact[n - 1 - i]; // Update k for next iteration

        // Find the index-th unused number
        int count = -1;
        for (int j = 1; j <= n; j++) {
            if (!used[j]) {
                count++;
                if (count == index) {
                    result[i] = j + '0';
                    used[j] = 1;
                    break;
                }
            }
        }
    }

    return result;
}

// Testing the function
int main() {
    printf("%s\n", getPermutation(3, 3)); // Output: "213"
    printf("%s\n", getPermutation(4, 9)); // Output: "2314"
    printf("%s\n", getPermutation(3, 1)); // Output: "123"
    
    return 0;
}
