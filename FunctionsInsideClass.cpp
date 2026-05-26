#include<iostream>
using namespace std;
class Crickter{
public:
    string name;
    int runs;

    // This will give Garbage value as output
    // Crickter(string name, int runs){
    //     name=name;
    //     runs=runs;
    // }
    Crickter(string name, int runs){
        this->name=name;
        this->runs=runs;
    }
    //Function inside class
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<endl;
    }
    //this always refers to the current object of the class. It is a pointer that points to the current object. It is used to access the members of the current object. It is also used to resolve the ambiguity between the member variables and the parameters of the constructor or function.
};

int main(){
    Crickter c1("Virat Kohli", 12041);
    c1.print(6);
    Crickter c2("Rohit Sharma", 9205);
    c2.print(10);
}