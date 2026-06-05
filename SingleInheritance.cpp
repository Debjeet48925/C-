#include<iostream>
using namespace std;
class Scooty
{   //Parent class or Base class
public:
    int topSpeed;
    float mileage; 
private:
    int bootspace;
};
class Bike : public Scooty //Child class or Derived class
{   //By default, the inheritance is private in C++. So, we need to specify the access specifier for inheritance.
public:
    int gears;  
};
int main()
{
    Bike b1;
    b1.topSpeed=120; //Accessing the inherited member from the parent class
    b1.mileage=40.5; //Accessing the inherited member from the parent class
    b1.gears=5; //Accessing the member of the child class
    cout<<"Top Speed: "<<b1.topSpeed<<endl;
    cout<<"Mileage: "<<b1.mileage<<endl;
    cout<<"Gears: "<<b1.gears<<endl;
    //b1.bootspace=20; Error: 'bootspace' is a private member of 'Scooty'
}