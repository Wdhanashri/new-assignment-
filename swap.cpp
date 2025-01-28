#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping using arithmetic operations
    a = a + b;  // a now becomes 15
    b = a - b;  // b now becomes 5 (original value of a)
    a = a - b;  // a now becomes 10 (original value of b)

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
