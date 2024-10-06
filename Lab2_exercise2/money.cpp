#include <iostream>
#include "money.h"
#include <type_traits>

using namespace std;

Money::Money(int e, int c)
{
    if (e < 0) {
        throw invalid_argument("invalid euros"); // returns from the method instantly
    }
    if (c < 0 || c > 99) {
        throw invalid_argument("invalid cents");
    }
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

// Money operator+ (const Money& m1, const Money& m2) {
//     int e = m1.getEuros() + m2.getEuros(); int c = m1.getCents() + m2.getCents(); return Money(e + c/100, c % 100);
// }

// Money operator+ (int value, const Money& m1)
// {
//     int e = value - (value % 1) + m1.getEuros(); int c = value % 1 + m1.getCents(); return Money(e, c);
// }

// Money operator+ (const Money& m1, double value)
// {
//     double e = value - (value % 1) + m1.getEuros(); double c = value % 1 + m1.getCents(); return Money(e, c);
// }

// template <typename T>

// Money operator+ (const Money& m1, T value) {
//     T e = static_cast<int>(value) + m1.getEuros();
//     T newCents = value - static_cast<int>(value);
//     // cout << newCents;
//     // T c = newCents * 100 + m1.getCents();
//     cout << m1.getCents() << endl;
//     double m1Cents =  m1.getCents();  // Convert cents from int to double
//     T c = (newCents + m1Cents / 100) * 100;
//     return Money(e, c);
// }

template <typename S, typename D>

Money operator+ (S v1, D v2) {
    if constexpr(is_same<S, int>::value || is_same<S, double>::value) {
        int e = static_cast<int>(v1) + v2.getEuros();
        int c = ((v1 - static_cast<int>(v1)) + v2.getCents() / 100) * 100;
        return Money(e, c);
    }else if constexpr(is_same<D, int>::value || is_same<D, double>::value) {
        int e = static_cast<int>(v2) + v1.getEuros();
        int c = ((v2 - static_cast<int>(v2)) + v1.getCents() / 100) * 100;
        return Money(e, c);
    }else {
        int e = v1.getEuros() + v2.getEuros(); int c = v1.getCents() + v2.getCents(); return Money(e + c/100, c % 100);
        return Money(e, c);
    }
}

int main()
{
    try {
        Money m3 (1, 101);
    } catch (invalid_argument const& e ) {
        cout << "invalid argument " << e.what() << endl;
    }
    Money m1(2, 50);
    Money m2(0, 52);
    // Money sum = m1.plus(m2);
    Money sum = m1 + m2;
    cout << "Sum = " << sum.toString() << endl;
    cout << ( m1 + 45.32 ).toString() << endl;
    return 0; // everything went as planned
}
