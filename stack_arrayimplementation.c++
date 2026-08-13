#include <iostream>
using namespace std;

const int n = 5;
int arr[n];
int top = -1;

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if (top == n - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int data)
{
    if (isFull())
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        top--;
    }
}
void traverse()
{
    int i;
    if (isEmpty())
    {
        cout << "Stack Elements are:" << endl;
        for (i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
                cout
            << "top elemnt is " << arr[top] << endl;
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch, ITEM;

    cout << "1)Push" << endl;
    cout << "2)Pop" << endl;
    cout << "3)Traverse" << endl;
    cout << "4)Exit" << endl;

    do
    {
        cout << "Enter Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                cout << "Enter ITEM:" << endl;
                cin >> ITEM;
                push(ITEM);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                traverse();
                break;
            }
            case 4:
            {
                cout << "Exit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid Choice " << endl;
            }
        }
    }while (ch != 4);

    return 0;
}