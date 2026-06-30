
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int rollNo[SIZE];
    string name[SIZE];
    float marks[SIZE];

    int n, choice;
    cout << "Enter number of students: ";
    cin >> n;

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> rollNo[i];

        cin.ignore();
        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Marks: ";
        cin >> marks[i];
    }

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====" << endl;
        cout << "1. Display All Records" << endl;
        cout << "2. Search Student by Roll Number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nStudent Records:\n";
            cout << "-----------------------------------\n";
            for (int i = 0; i < n; i++) {
                cout << "Roll No: " << rollNo[i] << endl;
                cout << "Name    : " << name[i] << endl;
                cout << "Marks   : " << marks[i] << endl;
                cout << "-----------------------------------\n";
            }
            break;

        case 2: {
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++) {
                if (rollNo[i] == searchRoll) {
                    cout << "\nStudent Found!\n";
                    cout << "Roll No: " << rollNo[i] << endl;
                    cout << "Name   : " << name[i] << endl;
                    cout << "Marks  : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student record not found!\n";

            break;
        }

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}