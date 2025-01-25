#include <stdio.h>
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev; 
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reversed number: 0\n");
        return 0;
    }
    reversed = reverseNumber(num, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
