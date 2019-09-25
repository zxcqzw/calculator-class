#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
    CCalc one;
    float a,b,c;
    char i;
    cout << "Please enter a calculation formula for two integers:" << endl;
    cin >> a;
    cin >> i;
    cin >> b;
    cout << "The result is:";
     if (i == '+')
       cout << one.plus(a,b);
     if (i == '-')
       cout << one.minus(a,b);
     if (i == '*')
       cout << one.multiply(a,b);
     if (i == '/')
       cout << one.divide(a,b);
    cout << endl;
     if (i != '+' && i != '-' && i != '*' && i != '/')
       cout << "Incorrect input!" << endl; 
}
