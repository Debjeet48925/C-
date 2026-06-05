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
    Fraction operator+(Fraction f)
    {
        int newNumerator = this->numerator * f.denominator + f.numerator * this->denominator;
        int newDenominator = this->denominator * f.denominator;
        Fraction result(newNumerator, newDenominator);
        return result;
    }
    
    Fraction operator-(Fraction f)
    {
        int newNumerator = this->numerator * f.denominator - f.numerator * this->denominator;
        int newDenominator = this->denominator * f.denominator;
        Fraction result(newNumerator, newDenominator);
        return result;
    }
};
int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);
    f1.display();
    f2.display();
    Fraction f3=f1+f2;
    f3.display();
    Fraction f4=f1-f2;
    f4.display();
}