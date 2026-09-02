#include<iostream>
using namespace std;

class Student {

    private :
    string name;
    int roll_no;
    int marks;

    public :
    Student(){ }

    Student(string nm, int r , int m)
    {
      name  = nm;
      roll_no = r;
      marks = m ;

    }

    Student (int r,int m){
        roll_no = r;
        marks = m;
    }
     void getdata(){
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter roll no :"<<endl;
        cin>>roll_no;
        cout<<"Enter marks :"<<endl;
        cin>>marks;
     }

     void putdata()
      {
        cout<<"************Student details***********"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Roll no :"<<roll_no<<endl;
        cout<<"Marks :"<<marks<<endl;
      }

     void putdata(string name, int roll_no, int marks)
      {
      
        cout<<"************Student details from object***********"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Roll no :"<<roll_no<<endl;
        cout<<"Marks :"<<marks<<endl;
      }

      void putdata(int roll_no,int marks){
        cout<<"************Student details***********"<<endl;
        cout<<"Roll no :"<<roll_no<<endl;
        cout<<"Marks :"<<marks<<endl;
      }
};

int main()
{
Student s1;
Student s2("Shreya",127,95);
Student s3(125,96);
s2.putdata();
s2.putdata("neha",122,94);
s1.putdata(125,96);

return 0;
}