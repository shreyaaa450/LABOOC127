#include <iostream>
using namespace std;

class Student {
    int rollNo;

public:
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter roll number: ";
        in >> s.rollNo;
        return in;
    }

    friend ostream& operator<<(ostream& out, Student& s) {
        out << "Roll Number: " << s.rollNo;
        return out;
    }
};

int main() {
    Student s;
    cin >> s;
    cout << s;

    return 0;
}