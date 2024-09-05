#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    public:
        string name;
        int age;

    Person(string n, int a) : name(n), age(a) {
    }

    void printName() {
            cout << "name: " << name;
            cout << " age: " << age << endl;
        }
};
int main()
{
    vector<Person> dudes;
    cout << "Insert names and ages" << endl;
    for(/*auto myDude : dudes*/int i = 0; i < 3; i++) {
        string tempName;
        int tempAge;
        cin >> tempName >> tempAge;
        // myDude(tempName, tempAge);
        dudes.emplace_back(tempName, tempAge);

    }
    for(auto guy : dudes) {
        guy.printName();
    }

}
