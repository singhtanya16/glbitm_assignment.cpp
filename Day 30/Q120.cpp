
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int empId[SIZE];
    string empName[SIZE];
    string department[SIZE];
    float salary[SIZE];

    int n, choice, searchId;

    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    // Input employee records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empId[i];
        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, empName[i]);

        cout << "Department: ";
        getline(cin, department[i]);

        cout << "Salary: ";
        cin >> salary[i];
        cin.ignore();
    }

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Display All Employees\n";
        cout << "2. Search Employee by ID\n";
        cout << "3. Update Salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << empName[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i] << endl;
                }
                break;

            case 2: {
                bool found = false;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (empId[i] == searchId) {
                        cout << "\nEmployee Found!\n";
                        cout << "ID         : " << empId[i] << endl;
                        cout << "Name       : " << empName[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Salary     : " << salary[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found!\n";
                break;
            }

            case 3: {
                bool found = false;
                float newSalary;

                cout << "Enter Employee ID: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (empId[i] == searchId) {
                        cout << "Enter new salary: ";
                        cin >> newSalary;
                        salary[i] = newSalary;
                        cout << "Salary updated successfully.\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found!\n";
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

