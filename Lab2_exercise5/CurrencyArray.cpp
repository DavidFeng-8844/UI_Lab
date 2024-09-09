
#include "CurrencyArray.h"
#include <iostream>
using namespace std;

// CurrencyArray baz(CurrencyArray m4)
// {
//     cout << "method" << endl;
//     return m4;
// }

CurrencyArray& CurrencyArray::operator=(const CurrencyArray& other) {
    amountArray = new int[2];
    amountArray[0] = other.amountArray[0];
    amountArray[1] = other.amountArray[1];
    cout << "copied" << endl;
}

///// Main function with direct access to the class/////
// int main()
// {
//     cout << "start of main " << endl;
//     {
//         CurrencyArray m3(2, 4);
//         cout << "middle of main " << endl;
//         m3 = baz(m3);
//     }
//     cout << "end of main " << endl;
// }

///// Use array /////
// CurrencyArray* baz(CurrencyArray* m4)
// {
//     cout << "method*" << endl;
//     return m4;
// }
// int main()
// {
//     cout << "start of main " << endl;
//     {
//         CurrencyArray* m3 = new CurrencyArray(2, 4);
//         cout << "middle of main " << endl;
//         baz(m3);
//         delete m3;
//     }
//     cout << "end of main " << endl;
// }

///// Use referecne /////
CurrencyArray& baz(CurrencyArray& m4)
{
    cout << "method&" << endl;
    return m4;
}
int main()
{
    cout << "start of main " << endl;
    {
        CurrencyArray m3(2, 4);
        cout << "middle of main " << endl;
        baz(m3);
    }
    cout << "end of main " << endl;
}

// CurrencyArray& create()
// {
//     CurrencyArray m3(2, 4);
//     return m3;
// }
// int main()
// {
//     CurrencyArray& ma = create();
//     cout << "cents " << ma.getCents() << endl;
// }

//// Other Codes in Lab2 Exercecise
// int main() {
//     CurrencyArray little(1,00);
//     CurrencyArray lots(9,99);
//     lots = little;
//     cout << lots.amountArray[0] << " " <<lots.amountArray[1] << endl;
//     lots.amountArray[0] = 0;
// }
