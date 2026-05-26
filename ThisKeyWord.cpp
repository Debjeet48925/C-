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
};
void print(Crickter c){
    cout<<c.name<<" "<<c.runs<<endl;
}
int main(){
    Crickter c1("Virat Kohli", 12041);
    print(c1);
    Crickter c2("Rohit Sharma", 9205);
    print(c2);

    
}