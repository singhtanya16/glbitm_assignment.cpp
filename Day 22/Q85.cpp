#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    // Check if original and reversed strings are equal
    if (str == rev) {
        cout << "Palindrome String";
    } else {
        cout << "Not a Palindrome String";
    }

    return 0;
}