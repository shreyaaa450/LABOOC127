#include<iostream>
using namespace std;

class Employee {
public:
    float salary;

    void getSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    virtual void calculateBonus() = 0;
};

class Manager : public Employee {
public:
    void calculateBonus() override {
        cout << "Manager Bonus: " << salary * 0.20 << endl;
    }
};

class Developer : public Employee {
public:
    void calculateBonus() override {
        cout << "Developer Bonus: " << salary * 0.10 + 2000 << endl;
    }
};

int main() {
    Manager m;
    Developer d;
    Employee *ptr;

    ptr = &m;
    cout << "For Manager:" << endl;
    m.getSalary();
    ptr->calculateBonus();

    ptr = &d;
    cout << "\nFor Developer:" << endl;
    d.getSalary();
    ptr->calculateBonus();

    return 0;
}