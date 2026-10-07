#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empid;
    string name;
    float salary;
    float basic;

public:
    Employee()
    {
        empid = 1;
        name = "Shreya";
        salary = 15000.0;
        basic = 15000.0;
    }

    Employee(int id, string n, float s)
    {
        empid = id;
        name = n;
        salary = s;
        basic = s;
    }

    float calculateSalary(float basic)
    {
        return basic;
    }

    float calculateSalary(float basic, float hra)
    {
        hra = (basic * hra) / 100;
        return basic + hra;
    }

    float calculateSalary(float basic, float hra, float da)
    {
        hra = (basic * hra) / 100;
        da = (basic * da) / 100;
        return basic + hra + da;
    }

    void putinfo()
    {
        cout << "\nEmployee ID: " << empid;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "Salary from basic salary: "
         << calculateSalary(15000) << endl;

    cout << "Salary with HRA: "
         << calculateSalary(15000, 6) << endl;

    cout << "Salary with DA and HRA: "
         << calculateSalary(15000, 6, 10) << endl;
    }
};

int main()
{
    Employee emp1;
    Employee emp(2, "Shreya", 25000.0);

    

    emp1.putinfo();

    return 0;
}