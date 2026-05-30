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
void change(Cricketer *p){
    p->runs=15000;//(*p).runs=15000; // changing the runs of c1 using pointer
}
int main()
{
    Cricketer c1("Virat Kohli", 12041, 50);
    // Cricketer c2("Rohit Sharma", 9205, 45);
    cout<<"Before change: "<<c1.runs<<endl; // 12041
    change(&c1);
    cout<<"After change: "<<c1.runs<<endl; // 15000
}