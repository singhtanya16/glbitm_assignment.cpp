#include <iostream>
using namespace std;

// Function to print Fibonacci series
void Fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    Fibonacci(n);

    return 0;
}