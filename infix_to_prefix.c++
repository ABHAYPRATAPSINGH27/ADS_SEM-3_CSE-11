// WAP TO CONVERT INFIX TO PREFIX

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char op){
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;        
}

bool isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string infixToPrefix(string infix){
   stack<char> st;
   string result = "";
   reverse(infix.begin(), infix.end());

}

