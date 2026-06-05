#include<iostream>
using namespace std;

class Cricketer{
    public:
        int runs;
        int Wickets;
        int avg;
};
class Engineer{
    public:
        int experience;
        string domain;
};
class Phodu : public Engineer, public Cricketer { // multiple inheritance
    public:
        string name;
};
int main()
{
    Phodu p;
    p.name = "Sachin";
    p.runs = 45000;
    p.Wickets = 0;
    p.avg = 55;
    p.experience = 20;
    p.domain = "Software";

    cout << "Name: " << p.name << endl;
    cout << "Runs: " << p.runs << endl;
    cout << "Wickets: " << p.Wickets << endl;
    cout << "Batting Avg: " << p.avg << endl;
    cout << "Experience: " << p.experience << " years" << endl;
    cout << "Domain: " << p.domain << endl;

    return 0;
}