#include <iostream>
#include <string>
using namespace std;

class Marksheet {
private:
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks of 5 Subjects:\n";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate() {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Student Name: " << name << endl;
        cout << "Subject 1   : " << m1 << endl;
        cout << "Subject 2   : " << m2 << endl;
        cout << "Subject 3   : " << m3 << endl;
        cout << "Subject 4   : " << m4 << endl;
        cout << "Subject 5   : " << m5 << endl;
        cout << "Total Marks : " << total << "/500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    Marksheet student;

    student.input();
    student.calculate();
    student.display();

    return 0;
}