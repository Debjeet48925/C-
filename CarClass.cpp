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
int main()
{
    Car c1;
    c1.name="Honda City";
    c1.price=150000;
    c1.seat=5;
    c1.type="Sedan";

    Car c2;
    c2.name="Toyota Camry";
    c2.price=220000;
    c2.seat=5;
    c2.type="Sedan";

    Car c3;
    c3.name="Ford Mustang";
    c3.price=310000;
    c3.seat=4;
    c3.type="Coupe";


    print(c1);
    print(c2);
    print(c3);
}