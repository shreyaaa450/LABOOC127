#include <iostream>
using namespace std;

class Fraction
{
 private :
 int num;
 int den;

 public :
 Fraction (){
    num = 1;
    den = 1;
 }

 Fraction(int n , int d){
    num = n;
    den = d;

 }

 void accept ()
 {
    cout<<"******** Enter a fraction **********"<<endl;
  cout<<"enter numerator :"<<endl;
  cin>>num;

  cout<<"enter denomenator :"<<endl;
  cin>>den;

 }

void add(Fraction f1,Fraction f2)
 {
   num = f1.num * f2.den + f2.num * f1 .den;
   den = f1.den * f2 .den;

  
 }

 void subtract(Fraction f1,Fraction f2)
 {
    num = f1.num * f2.den - f2.num * f1 .den;
   den = f1.den * f2 .den;
 }

 void display(){
    cout<< num << "/" << den << endl;
 }

};

int main(){
    Fraction f1,f2,f3;
    f1.accept();
    f2.accept();
    f3.add(f1,f2);
    
    f1.display();
    f2.display();
    f3.display();
    f3.subtract(f1,f2);
    f3.display();

    return 0;

}
