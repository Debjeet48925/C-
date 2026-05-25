#include<iostream>
using namespace std;

class Student{//Student is a new data type
public:
    string name;
    int rno;
    float gpa;
};

int main()
{
    Student s1;
    s1.name="Debjeet Majumder";
    s1.rno=55;
    s1.gpa=7.89;

    Student s2;
    s2.name="Debayan Chatterjee";
    s2.rno=54;
    s2.gpa=7.01;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}