#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 double num1,num2;
 int choice;

 cout<<"Enter 2 numbers for operations :"<<endl;
 cin>>num1>>num2;

 double add(double,double);
 double sub(double,double);
 double multiply(double,double);
 double divide(double,double);
 double mod(double,double);


 cout<<"Choose any option :"<<endl;
 cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit"<<endl;
 cin>>choice;

 switch(choice){
    case 1 :
    add(num1,num2);
    break;

    case 2 :
    sub(num1,num2);
    break;

    case 3 :
    multiply(num1,num2);
    break;

    case 4 :
    divide(num1,num2);
    break;

    case 5 :
    mod(num1,num2);
    break;

    case 6 :
    cout<<"Exit....."<<endl;
    break;

    default :
    cout<<"enter valid choice!!"<<endl;
 }

 

 return 0;
}

double add(double a, double b)
{
    cout<<"Addition :"<<a+b<<endl;
    return 0 ;
 
}

double sub(double a, double b)
{
   cout<<"Subtraction :"<<a - b<<endl;
   return 0 ;
}

double multiply(double a, double b)
{
 cout<<"Multiplication :"<<a * b<<endl;
 return 0 ;
}

double divide(double a, double b)
{
   cout<<"Division :"<<a/b<<endl;
   return 0 ;
}

double mod(double a, double b)
{
    
   cout<<"Modulus:"<< fmod(a,b)<<endl;
   return 0 ;
}