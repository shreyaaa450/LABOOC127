#include <iostream>
using namespace std;

int main()
{
int num1, num2 ;

cout<<"Enter two numbers :"<<endl;
cin>>num1>>num2;

void swap(int ,int );

swap(num1,num2);

return 0;

}
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    cout<< "num1 :"<<a<<endl;
    cout<< "num2 :"<<b<<endl;

}