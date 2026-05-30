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

int main(){
    Cricketer c1("Virat Kohli", 12041, 50);
    // Cricketer c2("Rohit Sharma", 9205, 45);

    Cricketer *p1 = &c1;
    cout<<(*p1).runs<<endl; // c1.runs = 12041
    (*p1).runs=15000;// changing the runs of c1 using pointer
    cout<<c1.runs<<endl; // 15000
    (*p1).avg=55; // changing the avg of c1 using pointer // c1.avg = 55
    cout<<c1.avg<<endl; // 55
}