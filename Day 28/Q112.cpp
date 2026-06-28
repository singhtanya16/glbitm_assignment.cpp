#include <iostream>
#include <string>
using namespace std;

class Contact {
public:
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int count = 0, choice;
    string searchName;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            getline(cin, contacts[count].name);

            cout << "Enter Phone Number: ";
            getline(cin, contacts[count].phone);

            count++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No contacts available.\n";
            } else {
                cout << "\n----- Contact List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "Name : " << contacts[i].name << endl;
                    cout << "Phone: " << contacts[i].phone << endl;
                    cout << "------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            {
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == searchName) {
                        cout << "\nContact Found!\n";
                        cout << "Name : " << contacts[i].name << endl;
                        cout << "Phone: " << contacts[i].phone << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Contact not found.\n";
            }
            break;

        case 4:
            cout << "Enter Name to Delete: ";
            getline(cin, searchName);

            {
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == searchName) {
                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        count--;
                        found = true;
                        cout << "Contact Deleted Successfully!\n";
                        break;
                    }
                }

                if (!found)
                    cout << "Contact not found.\n";
            }
            break;

        case 5:
            cout << "Thank you for using Contact Management System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}