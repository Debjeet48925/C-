#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;

    //Constructor
  
    Student(string n, int r, float g)//Parameterized constructor
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
    print(s1);

    //copy constructor 
    Student s2=s1; //Deep copy of s1 is created and assigned to s2
    s2.name="Debasmita Sen Gupta"; //Modifying the name of s2 does not affect s1
    print(s2);

    //It's also a Copy constructor when we create a new object and initialize it with an existing object of the same class
    Student s3(s1); //Deep copy of s1 is created and assigned to s3
    s3.name="Debkana Mitra"; //Modifying the name of s3 does not affect s1
    print(s3);
}