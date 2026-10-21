#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ofstream file("records.txt", ios::app);

    string record;
    char choice;

    do {
        cout << "Enter record: ";
        cin.ignore(1000, '\n');
        getline(cin, record);

        file << record << endl;

        cout << "Add another record? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    file.close();

    ifstream inFile("records.txt");

    cout << "\nAll Records:\n";

    while (getline(inFile, record)) {
        cout << record << endl;
    }

    inFile.close();
    return 0;
}