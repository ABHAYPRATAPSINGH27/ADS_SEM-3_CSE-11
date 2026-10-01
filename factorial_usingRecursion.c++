// WAP to find factorial of a number using tail_ NonTail recursion

#include <iostream>
using namespace std;

// int factorial(int n) {
//     if (n <= 1) {
//         return 1; 
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;
//     cout << "Enter a positive integer: ";
//     cin >> num;

//     if (num < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         int result = factorial(num);
//         cout << "Factorial of " << num << " is: " << result << endl;
//     }

//     return 0;
// }

int factorialNonTail(int n)
{
    if (n==0)
    return 1;
    return n*factorialNonTail(n-1);
}
int factorialTail(int n, int result)
{
    if (n==0)
    return result;
    return n*factorialTail(n-1, result *n);

}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Factorial using Non-Tail Recursion : " << factorialNonTail(n) << endl;
    cout << "Factorial using Tail Recursion : " << factorialTail(n, 1) << endl;
    return 0;
}

