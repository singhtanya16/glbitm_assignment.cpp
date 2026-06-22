#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    // Count words
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    // Number of words = number of spaces + 1
    cout << "Number of words = " << count + 1;

    return 0;
}