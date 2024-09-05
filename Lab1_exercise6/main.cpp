#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    public:
        string name;
        int age;

    Person () : name("unknown") {} //Default constructor with no parameters

    Person(string n, int a) : name(n), age(a) {
    }

    void printName() {
            cout << "name: " << name;
            cout << " age: " << age << endl;
        }
};
int main()
{
    cout << "Insert names and ages" << endl;
    ///// Add elements dynamically with emplace_back() /////
    // vector<Person> dudes;
    // for(/*auto myDude : dudes*/int i = 0; i < 3; i++) {
    //     string tempName;
    //     int tempAge;
    //     cin >> tempName >> tempAge;
    //     // myDude(tempName, tempAge);
    //     dudes.emplace_back(tempName, tempAge);
    // }

    ///// Use range-based for loop to assign values to existing objects /////
    vector<Person> dudes(3);
    for (auto& myDudes : dudes) {
        string tempName;
        int tempAge;
        cin >> tempName >> tempAge;
        myDudes.name = tempName;
        myDudes.age= tempAge;
    }
    for(auto& guy : dudes) {
        guy.printName();
    }

}
