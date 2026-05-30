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
    // Cricketer c1("Virat Kohli", 12041, 50);
    // Cricketer c2("Rohit Sharma", 9205, 45);
    int *ptr=new int(5245); // dynamic memory allocation for an integer
    cout<<"Value of ptr: "<<*ptr<<endl; // 5245
   
}