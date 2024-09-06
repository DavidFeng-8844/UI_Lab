#ifndef CURRENCY_H
#define CURRENCY_H
#include <string>
#include <iostream>

using namespace std;

class Currency {
public:
    int super, sub;
    Currency(int, int);
    virtual string toString() = 0;
    void zero();
};

class Euro : public Currency {
public:
    Euro(int sp, int sb) : Currency(sp, sb) {}
    string toString();
};

class Yuan : public Currency {
public:
    Yuan(int sp, int sb) : Currency(sp, sb) {}
    string toString();
};

class Pound : public Currency {
public:
    Pound(int sp, int sb) : Currency(sp, sb) {}
    string toString();
};

#endif // CURRENCY_H
