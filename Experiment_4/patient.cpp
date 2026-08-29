#include <iostream>
using namespace std;

class Patient {
    private:
    int id;
    string name;
    int age;
    string disease;
    string contact_no;
    double consultation_fees;

    public :
    Patient(){

    }

    Patient(string nm,int a, string d, string c){
        name = nm;
        age = a;
        disease = d;
        contact_no = c;

    }

    void register_patient();
    double calculate_fees();
    void display_details();

};

void Patient ::register_patient()
{
cout<<"Enter patient id :"<<endl;
cin>>id;
cout<<"Enter patient name :"<<endl;
cin>>name;
cout<<"Enter age :"<<endl;
cin>>age;
cout<<"Name of disease :"<<endl;
cin>>disease;
cout<<"Enter contact no. :"<<endl;
cin>>contact_no;

}

double Patient ::calculate_fees(){

    if(age < 12){
        consultation_fees = 300;
    }
    else if(age  < 30){
        consultation_fees = 500;
    }
    else if(age < 60){
       consultation_fees = 600;
    }
    else{
        consultation_fees = 700;
    }

 return consultation_fees;
}

void Patient ::display_details(){
    cout<<"************Patient details************";
    cout<<"Patient id        :"<<id<<endl;
    cout<<"Patient name      :"<<name<<endl;
    cout<<"Patient age       :"<<age<<endl;
    cout<<"Patient disease   :"<<disease<<endl;
    cout<<"Consultation fees :"<<calculate_fees()<<endl;
}

int main(){
    Patient p;
    p.register_patient();
    p.display_details();

    return 0;
}

