#include<iostream>
using namespace std;

class Student{//Student is a new data type
public:
    string name;
    int rno;
    float gpa;

    //Constructor
    Student(string n, int r, float g)
    {
        name=n;
        rno=r;
        gpa=g;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main()
{
    Student s1("Debjeet Majumder", 55, 7.89);
    Student s2("Debayan Chatterjee", 54, 7.01);

    print(s1);
    print(s2);
}