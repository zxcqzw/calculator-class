#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    CCalc one;
    float a,b;
    char i;
    cout << "Please enter a calculation formula for two integers:" << endl;
    cin >> a;
    cin >> i;
    cin >> b;
    one.set(a);
    one.set(b);
    cout << "The result is:";
     if (i == '+')
       cout << one.plus(one.getA(),one.getB());
     if (i == '-')
       cout << one.minus(one.getA(),one.getB());
     if (i == '*')
       cout << one.multiply(one.getA(),one.getB());
     if (i == '/')
       cout << one.divide(one.getA(),one.getB());
    cout << endl;
     if (i != '+' && i != '-' && i != '*' && i != '/')
       cout << "Incorrect input!" << endl; 
}

