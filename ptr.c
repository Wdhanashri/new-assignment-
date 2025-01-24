#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    *ptr1 = *ptr2 + (*ptr2 = *ptr1);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
