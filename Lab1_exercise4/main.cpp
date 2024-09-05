#include <iostream>
#include <vector>
#include <string>

using namespace std;
double mean_arr(double * arr, int length) {
    double sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return (double)sum / length;
}

double mean_vect(vector<double> vect) {
    double sum = 0;
    for(double num : vect) {
        sum += num;
    }
    return (double)sum / vect.size();
}

int main()
{
    /////// Array version ///////
    // double MyArr[5];
    // cout << "enter 5 numbers:" << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << "> ";
    //     cin >> MyArr[i];
    // }
    // cout << "The mean is: " << mean_arr(MyArr, 5) << endl;

    /////// Vector version ///////
    vector<double> MyVec(5);
    cout << "enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "> ";
        cin >> MyVec[i];
        // cout << MyVec[i];
    }
    cout << "The mean is: " << mean_vect(MyVec) << endl;
}
