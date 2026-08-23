#include <iostream>
using namespace std;

class Time
{
    private :
    int hrs;
    int mins;
    int sec;
    public :

    Time(){
        hrs = 0;
        mins = 0;
        sec = 0;
    }

    Time(int h,int m,int s){
        hrs = h;
        mins = m;
        sec = s;
    }

    void puttime(){
       cout << hrs << " hours, " << mins << " minutes, " << sec << " seconds" << endl;
    }

    void sum(Time t1 , Time t2)
    {
        sec = t1.sec + t2.sec;
        mins = t1.mins + t2.mins + (sec / 60);
        sec = sec % 60;
        hrs = t1.hrs + t2.hrs + (mins / 60);
        mins = mins % 60;
    }

};

int main()
{
 Time t1(2, 30, 15);
 Time t2(1, 25, 10);
 Time t3;
 t3.sum(t1,t2);

 cout << "\nT1 = "; t1.puttime();
    cout << "T2 = "; t2.puttime();
    cout << "T3 = "; t3.puttime();
    return 0;
}