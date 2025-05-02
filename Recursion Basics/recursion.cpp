#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;        // Base case
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num);
    return 0;
}