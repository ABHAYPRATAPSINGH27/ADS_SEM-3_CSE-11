#include <iostream>
using namespace std;
#define SIZE 5
int deque[SIZE];
int front = -1, rear = -1;
void insertFront(int value) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Deque is full. Cannot insert at front." << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }
    deque[front] = value;
}

void insertRear(int value) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Deque is full. Cannot insert at rear." << endl;
        return;
    }
    if (rear == -1) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = value;
}

void deleteFront() {
    if (front == -1) {
        cout << "Deque is empty. Cannot delete from front." << endl;
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (rear == -1) {
        cout << "Deque is empty. Cannot delete from rear." << endl;
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        cout << "Deque is empty." << endl;
        return;
    }
    cout << "Deque elements: ";
    int i = front;
    while (true) {
        cout << deque[i] << " ";
        if (i == rear) {
            break;
        }
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    int choice, value;
    do {
        cout << "1. Insert at front" << endl;
        cout << "2. Insert at rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display deque" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at front: ";
                cin >> value;
                insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at rear: ";
                cin >> value;
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}