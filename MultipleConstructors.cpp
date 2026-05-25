#include<iostream>
using namespace std;

class Student{//Student is a new data type
public:
    string name;
    int rno;
    float gpa;

    //Constructor
    Student()//Default constructor
    {

    }
    Student(string n, int r, float g)//Parameterized constructor
    {
        name=n;
        rno=r;
        gpa=g;
    }
     Student(string n, int r)//Parameterized constructor
    {
        name=n;
        rno=r;
    }
    Student(string n)//Parameterized constructor
    {
        name=n;
    }
    Student(int r, float g,string n)//Parameterized constructor
    {
        rno=r;
        gpa=g;
        name=n;
    }
    Student(float g, string n, int r)//Parameterized constructor
    {
        gpa=g;
        name=n;
        rno=r;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main()
{
    //s1 is created using the parameterized constructor with three parameters
    Student s1("Arunavo Majumder", 45, 7.89);
    
    //s2 is created using the default constructor and then its attributes are assigned values
    Student s2;
    s2.name="Debayan Chatterjee";
    s2.rno=54;
    s2.gpa=7.01;
    
    //s3 is created using the parameterized constructor with two parameters and then gpa is assigned a value
    Student s3("Aritra Kundu", 41);
    s3.gpa=8.1; // Initialize gpa for s3

    //s4 is created using the parameterized constructor with one parameter and then rno and gpa are assigned values 
    Student s4("Diganto Banerjee");
    s4.rno=58; // Initialize rno for s4
    s4.gpa=8.5; // Initialize gpa for s4

    //s5 is created using the parameterized constructor with three parameters in a different order
    Student s5(55, 7.9, "Debjeet Majumder");

    //s6 is created using the parameterized constructor with three parameters in a different order
    Student s6(8.3, "Agnik Das", 23);

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);
}