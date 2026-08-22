#include<iostream>
using namespace std;

class Employee
{
    private :
    int emp_id;
    string emp_name;
    string dept;
    double sal;

    public :

    void get_data()
    {
     cout<<"Enter employee id :"<<endl;
     cin>>emp_id;

     cout<<"Enter employee name :"<<endl;
     cin>>emp_name;

     cout<<"Enter department :"<<endl;
     cin>>dept;

     cout<<"Enter basic salary : "<<endl;
     cin>>sal;
    }

    void display()
    {
      cout<<"Employee details :"<<endl;
      cout<<"Employee id : "<<emp_id<<endl;
      cout<<"Employee name :"<<emp_name<<endl;
      cout<<"Basic salary :"<<sal<<endl;
      cout<<"Annual Salary :"<<calculateannualsal()<<endl;
    }

    double calculateannualsal(){
       return sal * 12;
    }

};

int main ()
{
    Employee e;
    e.get_data();
    e.calculateannualsal();
    e.display();

    return 0;

}