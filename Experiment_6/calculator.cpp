#include<iostream>
using namespace std;

class Calculator{
    private :
    int num1,num2,num3;
    double a, b;

    public :
    Calculator()
    {
     num1 = 10;
     num2 = 20;
     a = 15.5;
     b = 25.5;
    }

   

    int add(int a, int b){
        return (a+b);

    }

    int add(int a, int b , int c){
        return (a+b+c);

    }

    double add(double a, double b){
        return a+b;
    }
};

int main(){
    Calculator c;
   

  cout<<"Addition of two integers :"<<  c.add(10,30)<<endl;
   cout<<"Addition of 3 integers :"<< c.add(1,2,45)<<endl;
    cout<<"Addition of double :"<<c.add(12.5,34.5)<<endl;

    return 0;
}