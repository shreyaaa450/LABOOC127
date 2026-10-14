#include<iostream>
using namespace std;

class Matrix {
    public :
    int a[3][3];
    int b[3][3];
    int result[3][3];

  

    void getInput()
    {
        cout<<"Enter values for matrix A :"<<endl;

        for(int i = 0;i < 3;i++){
            for(int j = 0; j < 3;j++){
                cin>>a[i][j];
            }
            cout<<endl;
        }

        cout<<"Enter values for matrix B :"<<endl;

        for(int i = 0;i < 3;i++){
            for(int j = 0; j < 3;j++){
                cin>>b[i][j];
            }
            cout<<endl;
        }



    }

    Matrix operator +(Matrix & m1){
        Matrix t;
       
        for(int i = 0;i < 3;i++){
            for(int j = 0; j < 3;j++){
              t.result = m.a[i][j] + m.b[i][j];
            }
           }
           return t;
    }


    Matrix operator -(Matrix & m1){
        Matrix t;
       
        for(int i = 0;i < 3;i++){
            for(int j = 0; j < 3;j++){
              t.result = m.a[i][j] - m.b[i][j];
            }
           }
           return t;
    }
    Matrix operator ==(Matrix &m1){

        if(m1.a[3][3] == m1.b[3][3]){
           cout<<"matrices are equal"
        }
        else{
            cout<<"matrices are not equal"
        }
    }

};

int main (){
    Matrix m1;
    m1.getInput();

    cout<<"Addition of matrix :"<<m1.a + m1.b<<endl;

    cout<<"Addition of matrix :"<<m1.a - m1.b<<endl;

    cout<<m1.a == m1.b <<endl;

}