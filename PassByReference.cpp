#include<iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seat;
    string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
}
void change(Car& c)
{
    c.price=200000;
}
int main()
{
    Car c1;
    c1.name="Honda City";
    c1.price=150000;
    c1.seat=5;
    c1.type="Sedan";

    print(c1);
    change(c1);//Pass by reference
    print(c1);
}