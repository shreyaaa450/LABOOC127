#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int empid;
    string name;
    float salary;
    float gross_salary;
    float da,ta,hra;
    
    public:
  Employee()
  {
  empid = 1;
  salary = 15000.0;
  }

  Employee(int e,string n,float sal){
    empid = e;
   name=n;
   salary = sal;
  }

   /*void getinfo(){
        cout<<"Enter employee id :";
        cin>>empid;
        cout<<"\nEnter employee name :";
        cin>>name;
        cout<<"\nEnter employee salary:";
        cin>>salary;
         }
        */

    int calculateincome(){
        da=(salary*6)/100;
         ta=(salary*6)/100;
          hra=(salary*6)/100;
        gross_salary=salary+da+ta+hra;
        return 0;
 }
 void putinfo(){
    cout<<"\nEmployee id:"<<empid;
     cout<<"\nEmployee name:"<<name;
       cout<<"\nEmployee salary:"<<salary;
        cout<<"\nEmployee gross salary :"<<gross_salary<<endl;
                  
 }
 
};
int main (){
    Employee emp1;
    Employee emp(2,"Shreya",25000.0);
    emp1.calculateincome();
    emp1.putinfo();
   emp.calculateincome();
   emp.putinfo();

    return 0;
}