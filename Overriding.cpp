#include<iostream>
#include<vector>
using namespace std;
class Scooty
{   //Parent class or Base class
public:
    int topSpeed;
    float mileage; 
    virtual void sound()
    {
        cout<<"Vroom vroom!"<<endl;
    }
private:
    int bootspace;
};
class Bike : public Scooty //Child class or Derived class
{   //By default, the inheritance is private in C++. So, we need to specify the access specifier for inheritance.
public:
    int gears;  
    void sound() //Overriding the sound() function of the parent class
    {
        cout<<"Brrr brrr!"<<endl;
    }
};
int main()
{
    Scooty* s1= new Scooty();
    Scooty* b1= new Bike();
    s1->sound();
    b1->sound();
    //virtual keyword allows us to achieve runtime polymorphism. It allows the program to decide at runtime which function to call based on the type of object pointed to by the base class pointer. In this case, when we call the sound() function using the base class pointer b1, it
    vector<Scooty*> v;
    v.push_back(s1);
    v.push_back(b1);
    for(auto obj : v)
    {
        obj->sound();
    }
}
