
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int bookId[SIZE];
    string title[SIZE];
    string author[SIZE];
    bool issued[SIZE];

    int n, choice, searchId;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    // Add book records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookId[i];
        cin.ignore();

        cout << "Book Title: ";
        getline(cin, title[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);

        issued[i] = false;
    }

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Display All Books\n";
        cout << "2. Search Book by ID\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nLibrary Books:\n";
            for (int i = 0; i < n; i++) {
                cout << "\nBook ID : " << bookId[i];
                cout << "\nTitle   : " << title[i];
                cout << "\nAuthor  : " << author[i];
                cout << "\nStatus  : "
                     << (issued[i] ? "Issued" : "Available")
                     << endl;
            }
            break;

        case 2: {
            bool found = false;
            cout << "Enter Book ID: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == searchId) {
                    cout << "\nBook Found!\n";
                    cout << "Title  : " << title[i] << endl;
                    cout << "Author : " << author[i] << endl;
                    cout << "Status : "
                         << (issued[i] ? "Issued" : "Available")
                         << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";
            break;
        }

        case 3: {
            bool found = false;
            cout << "Enter Book ID to issue: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == searchId) {
                    found = true;
                    if (!issued[i]) {
                        issued[i] = true;
                        cout << "Book issued successfully.\n";
                    } else {
                        cout << "Book is already issued.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";
            break;
        }

        case 4: {
            bool found = false;
            cout << "Enter Book ID to return: ";
            cin >> searchId;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == searchId) {
                    found = true;
                    if (issued[i]) {
                        issued[i] = false;
                        cout << "Book returned successfully.\n";
                    } else {
                        cout << "Book was not issued.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";
            break;
        }

        case 5:
            cout << "Exiting Library System...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

