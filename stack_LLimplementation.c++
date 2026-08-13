#include <iostream>
using namespace std;

class Node{
public:
    int info;
    Node* next;
    
    Node(int i){
        info= i;
        next = NULL;

    }
};

void Push(Node* &top , int item)
{
    Node* temp = new Node(item);
    temp->next= top;
    top = temp;
    cout << item << " push into Stack\n";
}

int Pop(Node* &top)
{ 
    if  (top== NULL)
    {
        cout << "Underflow\n";
        return -1;
    }
    Node* temp = top;
    int item = temp->info;
    top = top->next;
    delete temp;
    cout << item << " pop from Stack\n";
    return item;
}
int Peek(Node* top)
{
    if (top== NULL)
    {
        cout << "Stack is empty\n";
        return -1;
    }
    return top->info;
}

void traverse(Node* top)
{
    cout << "Stack elements: ";
    Node* temp = top;
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* top =NULL;
    Push (top, 10);
    Push (top, 20);
    traverse(top);
    Push (top, 220);
    Push (top, 230);
    traverse(top);
    cout << "top element is: " << Peek(top) <<"\n";
    Pop(top);
    traverse(top);
    Pop(top);
    traverse(top);
    return 0;
}


