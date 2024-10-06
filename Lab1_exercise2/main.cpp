#include<iostream>
using namespace std;
int main() {
    double x, y, z;
    cout << "Enter x length (m)> ";
    cin >> x;
    cout << "Enter y length (m)> ";
    cin >> y;
    cout << "Enter z length (m)> ";
    cin >> z;
    double volume = x*y*z;
    cout << "The volume of the cubid is " << volume << "!" <<endl;
    cout << "Coordinates are ("<< x <<"," << y <<")" << endl;
       if (x >= 0 && x <= 3 && y >= 0  && y <= 3) {
           cout << "inside" << endl;
       }else {
           cout << "outside" <<endl;
       }
}








