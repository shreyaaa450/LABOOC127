#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int empid;
    string name;
    float salary;
    float basic;
    float da,ta,hra;
    
    public:
  Employee()
  {
  empid = 1;
  name = "Shreya"
  salary = 15000.0;
  }

  
    int calculatesalary(){
        da=(salary*6)/100;
         ta=(salary*6)/100;
          hra=(salary*6)/100;
        gross_salary=salary+da+ta+hra;
        return 0;
 }

  float calculateSalary(float basic)
    {
        return basic;
    }

    // Calculate salary using Basic Salary and HRA
    float calculateSalary(float basic, float hra)
    {
      
        hra= (basic*rhra)/100;
        return basic + hra;
    }

    // Calculate salary using Basic Salary, HRA and DA
    float calculateSalary(float basic, float hra, float da)
    {
        //rda = percenatge of DA
         da=(basic*rda)/100;
         
          hra=(salary*6)/100;
        return basic + hra + da;
    }

 void putinfo(){
    cout<<"\nEmployee id:"<<empid;
     cout<<"\nEmployee name:"<<name;
       cout<<"\nEmployee salary:"<<basic;
        cout<<"\nEmployee gross salary :"<<salary<<endl;
                  
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