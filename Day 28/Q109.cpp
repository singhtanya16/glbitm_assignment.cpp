#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    Book() {
        id = 0;
        title = "";
        author = "";
        issued = false;
    }
};

int main() {
    Book books[100];
    int count = 0, choice, searchId;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "\nEnter Book ID: ";
            cin >> books[count].id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            cout << "Enter Author Name: ";
            getline(cin, books[count].author);

            books[count].issued = false;
            count++;

            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if(count == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nBook List:\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nBook ID: " << books[i].id;
                    cout << "\nTitle: " << books[i].title;
                    cout << "\nAuthor: " << books[i].author;
                    cout << "\nStatus: " << (books[i].issued ? "Issued" : "Available") << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> searchId;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    cout << "\nBook Found!";
                    cout << "\nTitle: " << books[i].title;
                    cout << "\nAuthor: " << books[i].author;
                    cout << "\nStatus: " << (books[i].issued ? "Issued" : "Available") << endl;
                    break;
                }
                if(i == count - 1)
                    cout << "Book not found.\n";
            }
            break;

        case 4:
            cout << "Enter Book ID to Issue: ";
            cin >> searchId;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    if(!books[i].issued) {
                        books[i].issued = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is already issued.\n";
                    }
                    break;
                }
                if(i == count - 1)
                    cout << "Book not found.\n";
            }
            break;

        case 5:
            cout << "Enter Book ID to Return: ";
            cin >> searchId;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    if(books[i].issued) {
                        books[i].issued = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book was not issued.\n";
                    }
                    break;
                }
                if(i == count - 1)
                    cout << "Book not found.\n";
            }
            break;

        case 6:
            cout << "Thank you for using Library Management System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}