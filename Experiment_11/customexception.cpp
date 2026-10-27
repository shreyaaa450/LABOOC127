#include<iostream>
using namespace std;

class InvalidMarksException {
    public :
    const char* what(){
        return "invalid Marks! Enter marks between 0 and 100";
    }
};

int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;

    try{
        if(marks < 0 ||marks >100){
            throw InvalidMarksException();
        }
          cout<<"Valid Marks :"<<marks<<endl;
    }
  

        catch(InvalidMarksException e){
            cout<<e.what();
        }
    return 0;

}