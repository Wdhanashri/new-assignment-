#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

  
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    int arr[n];

  
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

  
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];      
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements are equal).\n");
    } else {
        printf("The second largest element is %d.\n", secondLargest);
    }

    return 0;
}
