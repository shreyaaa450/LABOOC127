#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int empid;
    string name;
    string department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empid;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployee()
    {
        cout << "\nEmployee ID: " << empid;
        cout << "\nEmployee Name: " << name;
        cout << "\nDepartment: " << department;
    }
};

class TeachingStaff : public Employee
{
    string subject;
    string qualification;

public:
    void getTeachingStaff()
    {
        getEmployee();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingStaff()
    {
        displayEmployee();

        cout << "\nSubject: " << subject;
        cout << "\nQualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee
{
    string designation;
    float workingHours;

public:
    void getNonTeachingStaff()
    {
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingStaff()
    {
        displayEmployee();

        cout << "\nDesignation: " << designation;
        cout << "\nWorking Hours: " << workingHours << endl;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff nt;

    cout << "Enter Teaching Staff Details\n";
    t.getTeachingStaff();

    cout << "\nEnter Non-Teaching Staff Details\n";
    nt.getNonTeachingStaff();

    cout << "\n\nTeaching Staff Details";
    t.displayTeachingStaff();

    cout << "\nNon-Teaching Staff Details";
    nt.displayNonTeachingStaff();

    return 0;
}