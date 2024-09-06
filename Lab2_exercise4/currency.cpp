#include "currency.h"
#include <string>
#include <iostream>

using namespace std;

void badBank(Currency* c) {
    if (Pound* aPound = dynamic_cast<Pound*>(c)) {
        c->super--;
    }else if (Euro* aEuro = dynamic_cast<Euro*>(c)) {
        c->super++;
    }else {
        c->super*=2;
        c->sub*=2;
    }
}
// Constructor for Currency class
Currency::Currency(int sp, int sb) : super(sp), sub(sb) {}

// Method for all currencies to set it to zero
void Currency::zero() {
    super = 0;
    sub = 0;
}

// Convert Euro to string
string Euro::toString() {
    // Convert int to string and concatenate
    string euro = "EUR " + to_string(super) + "." + (sub < 10 ? "0" : "") + to_string(sub);
    return euro;
}

// Convert Yuan to string
string Yuan::toString() {
    // Convert int to string and concatenate
    string yuan = "CNY " + to_string(super) + "." + (sub < 10 ? "0" : "") + to_string(sub);
    return yuan;
}

// Convert Pound to string
string Pound::toString() {
    // Convert int to string and concatenate
    string pound = "GBP " + to_string(super) + "." + (sub < 10 ? "0" : "") + to_string(sub);
    return pound;
}

int main() {
    // Create and print different currency objects
    cout << Euro(341, 21).toString() << endl;
    cout << Yuan(101, 31).toString() << endl;
    cout << Pound(44, 0).toString() << endl;
    Pound p(1,00);
    p.zero();
    cout << " after the apocalypse, the pound was worth " << p.toString() << endl;
    Yuan y(100, 0);
    badBank(&y);
    cout << y.toString() << endl;
    return 0;
}
