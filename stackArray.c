#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1)
        front = 0;

    queueArr[++rear] = value;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }
    front++;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
    cout << endl;
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    display();
    dequeue();
    display();
}

