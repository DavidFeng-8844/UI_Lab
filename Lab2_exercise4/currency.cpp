#include "currency.h"
#include <string>
#include <iostream>

using namespace std;

// Constructor for Currency class
Currency::Currency(int sp, int sb) : super(sp), sub(sb) {}

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

    return 0;
}
