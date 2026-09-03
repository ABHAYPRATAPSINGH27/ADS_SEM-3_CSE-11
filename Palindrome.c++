#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;
    bool isPalindrome = true;

    for (char ch : str)
    {
        s.push(ch);
    }

    for (char ch : str)
    {
        if (s.top() != ch)
        {
            isPalindrome = false;
            break;
        }
        s.pop();
    }

    if (isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}



