#ifndef CURRENCYARRAY_H
#define CURRENCYARRAY_H

#include <iostream>
using namespace std;

class CurrencyArray
{
public:
    int *amountArray;
    CurrencyArray(int e, int c) // Constructor
    {
        amountArray= new int[2];
        amountArray[0] = e;
        amountArray[1] = c;
        cout << "created" << endl;
    }

    CurrencyArray(const CurrencyArray& copy) { //Copy Constructor
        amountArray = new int[2];
        amountArray[0] = copy.amountArray[0];
        amountArray[1] = copy.amountArray[1];
        cout << "copy constructor" << endl;
    }

    CurrencyArray& operator=(const CurrencyArray& other); // Member function to copy an instance

    int getEuros() const
    {
        return amountArray[0];
    }

    int getCents() const
    {
        return amountArray[1];
    }

    ~CurrencyArray() // Destructor
    {
        delete[] amountArray;
        cout << "destryed" << endl;
    }
};

#endif // CURRENCYARRAY_H
