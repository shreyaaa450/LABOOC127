#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class Hotel {
protected:
    string hotelName;

public:
    Hotel() {
        hotelName = "Royal Palace Hotel";
    }

    // Pure virtual function
    virtual void displayDetails() = 0;

};


class Customer : public Hotel {
protected:
    string name;
    int roomNo;
    int days;
    double roomCharge;
    double foodCharge;
    double totalBill;

public:
    Customer() {
        name = "";
        roomNo = 0;
        days = 0;
        roomCharge = 0;
        foodCharge = 0;
        totalBill = 0;
    }

    
    void getDetails() {
        cout << "\nEnter customer name: ";
        getline(cin >> ws, name);

        cout << "Enter room number: ";
        cin >> roomNo;

        cout << "Enter number of days: ";
        cin >> days;

        cout << "Enter room charge per day: ";
        cin >> roomCharge;

        cout << "Enter food charges: ";
        cin >> foodCharge;
    }

    
    void getDetails(string customerName, int room) {
        name = customerName;
        roomNo = room;
    }

   
    void displayDetails() override {
        cout << "\nCustomer Name : " << name;
        cout << "\nRoom Number   : " << roomNo;
        cout << "\nDays Stayed   : " << days;
    }

   
    friend void generateBill(Customer &c);
};

// Derived class
class Bill : public Customer {
public:
    
    void displayDetails() override {
        cout << "\n========== HOTEL DETAILS ==========\n";
        cout << "Hotel Name    : " << hotelName;
        Customer::displayDetails();
        cout << "\n===================================\n";
    }

    
    void saveBill() {
        totalBill = (days * roomCharge) + foodCharge;

        ofstream file("CustomerBill.txt");

        if (!file) {
            cout << "\nError opening bill file!\n";
            return;
        }

        file << "========================================\n";
        file << "           ROYAL PALACE HOTEL           \n";
        file << "              CUSTOMER BILL             \n";
        file << "========================================\n";
        file << left << setw(22) << "Customer Name" << ": " << name << "\n";
        file << left << setw(22) << "Room Number" << ": " << roomNo << "\n";
        file << left << setw(22) << "Days Stayed" << ": " << days << "\n";
        file << fixed << setprecision(2);

        file << "\n----------------------------------------\n";
        file << left << setw(25) << "Description"
             << right << setw(12) << "Amount (Rs.)\n";
        file << "----------------------------------------\n";

        file << left << setw(25) << "Room Charges"
             << right << setw(12) << days * roomCharge << "\n";

        file << left << setw(25) << "Food Charges"
             << right << setw(12) << foodCharge << "\n";

        file << "----------------------------------------\n";
        file << left << setw(25) << "TOTAL BILL"
             << right << setw(12) << totalBill << "\n";
        file << "========================================\n";
        file << "          Thank you for visiting!       \n";
        file << "========================================\n";

        file.close();

        cout << "\nBill saved successfully in CustomerBill.txt\n";
    }

    // Display calculated bill
    void showBill() {
        totalBill = (days * roomCharge) + foodCharge;

        cout << fixed << setprecision(2);
        cout << "\n========== BILL SUMMARY ==========\n";
        cout << "Room Charges : Rs. " << days * roomCharge << "\n";
        cout << "Food Charges : Rs. " << foodCharge << "\n";
        cout << "Total Bill   : Rs. " << totalBill << "\n";
        cout << "=================================\n";
    }
};

void generateBill(Customer &c) {
    c.totalBill = (c.days * c.roomCharge) + c.foodCharge;

    cout << fixed << setprecision(2);
    cout << "\n[Friend Function Access]";
    cout << "\nCustomer: " << c.name;
    cout << "\nTotal Bill: Rs. " << c.totalBill << "\n";
}

int main() {
    Bill b;
    int choice;

    cout << "====================================\n";
    cout << "       HOTEL MANAGEMENT SYSTEM      \n";
    cout << "====================================\n";

    do {
        cout << "\n1. Enter Customer Details";
        cout << "\n2. Display Customer Details";
        cout << "\n3. Generate Bill";
        cout << "\n4. Save Bill to File";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            b.getDetails();
            break;

        case 2:
            b.displayDetails();
            break;

        case 3:
            generateBill(b);
            b.showBill();
            break;

        case 4:
            b.saveBill();
            break;

        case 5:
            cout << "\nThank you for using Hotel Management System!\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}