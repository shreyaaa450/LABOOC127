#include <iostream>
using namespace std;

class product 
{
    private :
    int product_id;
    string product_nm;
    double unit_price;
    int quantity;

    public:
    void get_details()
    {
      cout<<"Enter product id: "<<endl;
      cin>>product_id;

      cout<<"Enter product name :"<<endl;
      cin>>product_nm;

      cout<<"Enter unit price of product :"<<endl;
      cin>>unit_price;

      cout<<"Enter the quantity of the product :"<<endl;
      cin>>quantity;
    }

    double cal_totalcost()
    {
     double total_cost = quantity * unit_price;
     return total_cost;
    }

    void display()
    {
        cout<<"Product id :"<<product_id<<endl;
        cout<<"Product name :"<<product_nm<<endl;
        cout<<"Product Price/unit :"<<unit_price<<endl;
        cout<<"Product quantity :"<<quantity<<endl;
        cout<<"Total cost :"<<cal_totalcost()<<endl;
    }
};

int main(){
    product p;
    p.get_details();
    p.display();
    return 0;
}