#include<iostream>
using namespace std;

class Cricketer{
public:     
    string name;
    int runs;
    int avg;

    Cricketer(string name, int runs,int avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
  
};

int main()
{
    Cricketer c1("Virat Kohli", 12041, 50);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 9205, 45);
    
    cout<<"Name: "<<c1.name<<" Runs: "<<c1.runs<<" Average: "<<c1.avg<<endl;
    cout<<"Name: "<<c2->name<<" Runs: "<<c2->runs<<" Average: "<<c2->avg<<endl;
}