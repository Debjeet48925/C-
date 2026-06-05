#include<iostream>
using namespace std;

class Fraction {
public:
    int numerator;
    int denominator;
    Fraction(int num, int den){
        numerator = num;
        denominator = den;
    }
    void display()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    Fraction add(Fraction f)
    {
        int newNumerator = this->numerator * f.denominator + f.numerator * this->denominator;
        int newDenominator = this->denominator * f.denominator;
        Fraction result(newNumerator, newDenominator);
        return result;
    }
};
int main()
{
    Fraction f1(1, 1);
    Fraction f2(1, 2);
    f1.display();
    f2.display();
    Fraction f3=f1.add(f2);
    f3.display();
}