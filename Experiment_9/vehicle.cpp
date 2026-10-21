#include<iostream>
using namespace std;

class vehicle {
public:
    virtual void start() const = 0;
    virtual void stop() const = 0;
};

class Car : public vehicle {
public:
    void start() const override {
        cout << "Car starts...." << endl;
    }

    void stop() const override {
        cout << "Car stops...." << endl;
    }
};

class Bike : public vehicle {
public:
    void start() const override {
        cout << "Bike starts...." << endl;
    }

    void stop() const override {
        cout << "Bike stops...." << endl;
    }
};

int main() {
    vehicle *ptr;
    Car c;
    Bike b;

    ptr = &c;
    ptr->start();
    ptr->stop();

    ptr = &b;
    ptr->start();
    ptr->stop();

    return 0;
}