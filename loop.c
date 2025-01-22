#include <stdio.h>

void printPattern(int n, int i, int j) {
    (i <= n) ? 
        ((j < i) ? (printf("%d", i), printPattern(n, i, j + 1)) : (printf("\n"), printPattern(n, i + 1, 0))) 
        : 0;
}

int main() {
    int n = 5; // You can change n to any value
    printPattern(n, 1, 0);
    return 0;
}
