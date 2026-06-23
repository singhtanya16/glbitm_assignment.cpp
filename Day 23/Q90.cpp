#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};
    bool found = false;

    // Traverse the string and check for repetition
    for (char ch : str) {
        freq[ch]++;

        if (freq[ch] == 2) {
            cout << "First repeating character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No repeating character found." << endl;
    }

    return 0;
}