#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool Armstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;

    // Count number of digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power 'digits'
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (Armstrong(n))
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}