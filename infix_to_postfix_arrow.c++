#include <iostream>
#include <stack>
using namespace std;

int precedence(char op)
{
    if (op == '+'|| op == '-')
    return 1;
    if (op == '*'|| op == '/' || op == '%')
    return 2;
    if (op == '^')
    return 3;

    return 0;
}

bool isRightAssociative(char op){
    return (op == '^');
}

int main(){
    string Q, P;
    cout << "Enter the infix expression: ";
    cin >> Q;

    stack<char>s;

    for (int i= 0; i<Q.length(); i++){
        char ch = Q[i];
        if (isalnum(ch)){
            P += ch;
        }
        else if (ch == '('){
            s.push(ch);
        }
        else if (ch == ')'){
            while (!s.empty() && s.top() != '(')
            {
                P += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(')
                s.pop();
        }
        else{
            while (!s.empty() && precedence(s.top()) >= precedence(ch) && !isRightAssociative(ch)){
                P += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()){
        P += s.top();
        s.pop();
    }
    cout << "The postfix expression is: " << P << endl;
    return 0;
}

