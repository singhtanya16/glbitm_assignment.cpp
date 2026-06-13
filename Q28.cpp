#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0) {
    if (n == 0) {          // Base case
        return rev;
    }

    return reverseNum(n / 10, rev * 10 + n % 10);   // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number = " << reverseNum(n);

    return 0;
}