#include <iostream>
using namespace std;

int isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n ;
cin >> n ;
    if (isPalindrome(n))
        cout << n << " is a palindrome" << endl;
    else
        cout << n << " is not a palindrome" << endl;
    return 0;
}

