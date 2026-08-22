#include <iostream>
using namespace std;

int main() {
    string customerName;
    double units_consumed, bill;

    cout<<"*************Electricity Bill Calculator**********************"<<endl;

    cout<<"Enter Customer Name : "<<endl;
    cin>>customerName;
    
    cout<<"Enter the no. of units consumend : "<<endl;
    cin>>units_consumed;

    double calculate_bill(double units);
    bill =  calculate_bill(units_consumed);
    
    cout<<"Dear "<<customerName<<endl;

      cout<<"Your Total bill :₹"<<bill<<endl;
    return 0;
}

double calculate_bill(double units)
{
    double rps = 0;
    if(units > 0 && units <= 100 )
    {
        rps = 5.0;
    }
    else if(units > 101 && units <= 200 )
    {
      rps = 7.0;
    }
    else if(units > 201 && units <= 300 )
    {
      rps = 10.0;
    }
    else{
        rps = 12.0;
    }

    double total_bill = units  * rps ;
    return total_bill;
}