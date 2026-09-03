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
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        
    }
};