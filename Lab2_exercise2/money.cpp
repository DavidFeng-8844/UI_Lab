#include <iostream>
#include "money.h"

using namespace std;

Money::Money(int e, int c) {
    euros = e; cents = c;
}

int Money::getEuros() const {
    return euros;
}

int Money::getCents() const {
    return cents;
}

string Money::toString() const {
    // to_string is a utility in the std namespace return "EUR " + to_string(euros) +'.' + to_string(cents);
    return "EUR " + to_string(euros) +'.' + to_string(cents);
}

Money Money::plus(const Money& other) const {
    // Money class can access private members of other Money objects.
    // other.euros++;
    return Money(euros + other.euros, cents + other.cents);
}

Money operator+ (const Money& m1, const Money& m2) {
    int e = m1.getEuros() + m2.getEuros(); int c = m1.getCents() + m2.getCents(); return Money(e + c/100, c % 100);
}

Money operator+ (const Money& m1, int value)
{
    int e = value - (value % 1) + m1.getEuros(); int c = value % 1 + m1.getCents(); return Money(e, c);
}
int main()
{
    Money m1(2, 50);
    Money m2(0, 52);
    // Money sum = m1.plus(m2);
    Money sum = m1 + m2;
    cout << "Sum = " << sum.toString() << endl;
    cout << ( m1 + 1 ).toString() << endl;
    return 0; // everything went as planned
}
