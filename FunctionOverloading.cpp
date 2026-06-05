#include<iostream>
using namespace std;

class Loading{
    public:
    void sum(string a,string b,string c)
    {
        cout<<a+b+c<<endl;
    }
    void sum(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
    // int sum(int a,int b) //It will produce an error
    // {
    //     cout<<a+b<<endl;
    // }
};
int main()
{
    Loading a;
    a.sum(3,5);
    a.sum(5,9,45);
    a.sum("Debjeet"," ","Majumder");
}