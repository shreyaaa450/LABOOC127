#include<iostream>
using namespace std;

int main()
{
int num;
cin>>num;

try {
    if(num > 0){
        throw num;
    }
 cout<<"Number is positive";
    
}

catch(int n) {
    cout<<"Exception is caught :number is negative"<<endl;
}
}