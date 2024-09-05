#include <iostream>
#include <string>

using namespace std;

bool ifPalindrome (string word) {
    string reversedWord;
    for (int i = word.length() - 1; i >= 0; i--) {
        reversedWord += word[i];
    }
    cout << reversedWord << endl;
    if (reversedWord == word) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    string yourWord;
    cout << "Enter a word to see if it's Palindrome: " << endl;
    cin >> yourWord;
    cout << ifPalindrome(yourWord) << endl;
}
