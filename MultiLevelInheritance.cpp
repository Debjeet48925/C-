#include<iostream>
using namespace std;
//Multi-level Inheritance
class Vehicle
{
    public:
        int topSpeed;
        int mileage;
        string fuel;
};
class TwoWheeler: public Vehicle
{
    public:
        bool hasCarrier;
        string handleType;
};
class FourWheeler: public Vehicle
{
    public:
        int seatCount;
        bool hasAC;
};
class Scooty: public TwoWheeler
{
    public:
        bool electric;
        string model;
};
class Bike: public TwoWheeler
{
    public:
        bool sportsBike;
        string type;
};
class Truck: public FourWheeler
{
    public:
        int loadCapacity;
        bool hasTrailer;
};
int main()
{
    Scooty s;
    s.topSpeed = 70;
    s.mileage = 45;
    s.fuel = "Petrol";
    s.hasCarrier = true;
    s.handleType = "Raised";
    s.electric = false;
    s.model = "Activa";

    Bike b;
    b.topSpeed = 120;
    b.mileage = 35;
    b.fuel = "Petrol";
    b.hasCarrier = false;
    b.handleType = "Clip-on";
    b.sportsBike = true;
    b.type = "Sports";

    Truck t;
    t.topSpeed = 90;
    t.mileage = 8;
    t.fuel = "Diesel";
    t.seatCount = 2;
    t.hasAC = false;
    t.loadCapacity = 10000;
    t.hasTrailer = true;

    cout << "Scooty: " << s.model << ", " << s.topSpeed << " km/h, " << s.mileage << " kmpl, " << s.fuel
         << ", Carrier=" << (s.hasCarrier ? "yes" : "no") << ", Handle=" << s.handleType
         << ", Electric=" << (s.electric ? "yes" : "no") << endl;
    cout << "Bike: " << b.type << ", " << b.topSpeed << " km/h, " << b.mileage << " kmpl, " << b.fuel
         << ", Carrier=" << (b.hasCarrier ? "yes" : "no") << ", Handle=" << b.handleType
         << ", Sports=" << (b.sportsBike ? "yes" : "no") << endl;
    cout << "Truck: " << t.topSpeed << " km/h, " << t.mileage << " kmpl, " << t.fuel
         << ", Seats=" << t.seatCount << ", AC=" << (t.hasAC ? "yes" : "no")
         << ", Capacity=" << t.loadCapacity << " kg, Trailer=" << (t.hasTrailer ? "yes" : "no") << endl;

    return 0;
}