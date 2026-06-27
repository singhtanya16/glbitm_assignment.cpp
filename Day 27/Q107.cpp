#include <iostream>
#include <string>
using namespace std;

class Salary {
public:
    int empId;
    string empName;
    float basicSalary, hra, da, pf, netSalary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculate() {
        hra = basicSalary * 0.20;   // 20% HRA
        da = basicSalary * 0.10;    // 10% DA
        pf = basicSalary * 0.05;    // 5% PF

        netSalary = basicSalary + hra + da - pf;
    }

    void display() {
        cout << "\n----- Salary Details -----\n";
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "PF            : " << pf << endl;
        cout << "Net Salary    : " << netSalary << endl;
    }
};

int main() {
    Salary s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}