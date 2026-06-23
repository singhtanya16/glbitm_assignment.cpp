#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Find the first non-repeating character
    bool found = false;
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}