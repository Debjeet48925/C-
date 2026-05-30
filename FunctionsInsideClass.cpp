#include<iostream>
using namespace std;
class Crickter{
public:
    string name;
    int runs;
    int avg;

    // This will give Garbage value as output
    // Crickter(string name, int runs){
    //     name=name;
    //     runs=runs;
    // }
    Crickter(string name, int runs,int avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    //Function inside class
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }
    //this always refers to the current object of the class. It is a pointer that points to the current object. It is used to access the members of the current object. It is also used to resolve the ambiguity between the member variables and the parameters of the constructor or function.
    int matches(){
        return runs/avg;
    }
};

int main(){
    Crickter c1("Virat Kohli", 12041, 50);
    c1.print(6);
    Crickter c2("Rohit Sharma", 9205, 45);
    c2.print(10);
    cout<<c1.name<<" has played "<<c1.matches()<<" matches."<<endl;
    cout<<c2.name<<" has played "<<c2.matches()<<" matches."<<endl;
}