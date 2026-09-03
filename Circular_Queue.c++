// PROGRAM OF ARRAY IMPLEMENTAION OF CIRCULAR QUEUE
#include <iostream>
using namespace std;
#define SIZE 5
class CircularQueue {
    int queue[SIZE];
    int front;
    int rear;
public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if ((rear + 1) % SIZE == front) {
            cout << "Circular Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    void dequeue()
    {
        if (front == -1) {
            cout << "Circular Queue is empty" << endl;
            return;
        }
        cout << "Dequeued: " << queue[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
    void display()
    {
        if (front == -1) {
            cout << "Circular Queue is empty" << endl;
            return;
        }
        cout << "Circular Queue elements: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50); // Circular Queue is full
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cq.display();
    cq.enqueue(60);
    cq.enqueue(70); // Circular Queue is full
    cq.display();
    return 0;
}