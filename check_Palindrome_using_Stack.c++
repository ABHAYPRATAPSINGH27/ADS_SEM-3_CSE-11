#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    for (char c : str) {
        if (c != ' ') {
            s.push(c);
        }
    }
    for (char c : str) {
        if (c != ' ') {
            if (s.top() != c) {
                return false;
            }
            s.pop();
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}