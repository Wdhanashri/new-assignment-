#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int *matrix;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    matrix = (int *)malloc(n * n * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (matrix + i * n + j));
        }
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        // Sum of primary diagonal (matrix[i][i]) and secondary diagonal (matrix[i][n-i-1])
        sum += *(matrix + i * n + i);             
        sum += *(matrix + i * n + (n - i - 1));    
    }

  
    if (n % 2 != 0) {
        sum -= *(matrix + (n / 2) * n + (n / 2));
    }

    printf("Sum of diagonal elements: %d\n", sum);

    free(matrix);

    return 0;
}
