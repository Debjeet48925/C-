#include<iostream>
using namespace std;    

class Student
{
public:
    int rno;
    string name;
     void display()
    {
        cout<<"Roll No: "<<rno<<" "<<"Name: "<<name<<" "<<"Marks: "<<marks<<endl;
    }
    Student()
    {

    }
    Student(int rno,string name,float marks)
    {
        this->rno=rno;
        this->name=name;
        this->marks=marks;
    }
    float getMarks(){//Getter function for marks
       return marks;
    }
    void setMarks(float m){ //Setter function for marks
        if(m>=0 && m<=100)
        {
            marks=m;
        }
        else
        {
            cout<<"Invalid marks"<<endl;
        }
    }
    private:
    float marks;
   
};
int main()
{
    Student s1(55,"Debjeet",85.5);
    s1.display();
    cout<<"Marks: "<<s1.getMarks()<<endl;
    Student s2;
    s2.rno=56;
    s2.name="Sourav";
    //s2.marks=90.5; //Error: 'marks' is a private member of 'Student'
    s2.setMarks(90.5);//no error as we are using setter function to set marks
    s2.display();
}