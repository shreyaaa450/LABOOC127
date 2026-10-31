#include <iostream>
using namespace std;

class Box {
    private :
    int len,wid,height;

    public :
    Box (){
        len = 10;
        wid = 20 ;
        height = 30;
    }

    Box (int l , int w, int h){
        len = l;
        wid = w ;
        height = h;
    }

    Box (Box &b){
        len = b.len;
        wid = b.wid;
        height = b.height;

    }
    ~Box(){
        cout<<"Destructor executed....";
    }

    int calculate ()
    {
     return len*wid*height;
    }

    void display (){
        cout<<"Box measurements :"<<endl;
        cout<<"Length :"<<len<<endl<<"Width :"<<wid<<endl<<"Height :"<<height<<endl;
      
    }
};

int main(){
    Box b(10,20,45),b1;
    b.display();
   cout<<"Volume of the box :"<< b.calculate()<<endl;
   -b;

}

