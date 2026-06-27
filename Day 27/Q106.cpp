#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, searchId;
    bool found;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Department: ";
            getline(cin, emp[n].department);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nDepartment: " << emp[i].department;
                    cout << "\nSalary: " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> searchId;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == searchId) {
                    cout << "\nEmployee Found:\n";
                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Department: " << emp[i].department << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Record Not Found!\n";
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}