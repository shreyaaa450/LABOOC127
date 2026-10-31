#include <iostream>
#include <string>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    double balance;

public:
    // Constructor
    MobileRecharge(string num, string name, double bal)
    {
        mobileNumber = num;
        customerName = name;
        balance = bal;
    }

    // Recharge balance
    void recharge(double amount)
    {
        balance += amount;
        cout << "Recharge Successful!" << endl;
        cout << "Amount Added: Rs. " << amount << endl;
    }

    // Deduct balance
    void deductBalance(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Rs. " << amount << " deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display account details
    void displayDetails()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Current Balance : Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge user("9876543210", "Shreya", 100);

    user.displayDetails();

    user.recharge(200);
    user.displayDetails();

    user.deductBalance(150);
    user.displayDetails();

    return 0;
}