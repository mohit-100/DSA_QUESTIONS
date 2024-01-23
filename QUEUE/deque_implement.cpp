#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Deque {
private:
    int arr[MAX_SIZE];
    int front;
    int back;

public:
    Deque() {
        front = 0; // Initialize front with 0
        back = 0;  // Initialize back with 0
    }

    bool isEmpty() {
        return front == back;
    }

    bool isFull() {
        return (front == 0 && back == MAX_SIZE - 1) || (front == back + 1);
    }

    void pushFront(int x) {
        if (isFull()) {
            cout << "Deque is full" << endl;
            return;
        }

        if (front == 0) {
            front = MAX_SIZE - 1;
        } else {
            front--;
        }

        arr[front] = x;
    }

    void pushBack(int x) {
        if (isFull()) {
            cout << "Deque is full" << endl;
            return;
        }

        if (back == MAX_SIZE - 1) {
            back = 0;
        } else {
            back++;
        }

        arr[back] = x;
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return;
        }

        if (front == back) {
            front = back = 0;
        } else if (front == MAX_SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void popBack() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return;
        }

        if (front == back) {
            front = back = 0;
        } else if (back == 0) {
            back = MAX_SIZE - 1;
        } else {
            back--;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[back];
    }
};

int main() {
    Deque dq;

    dq.pushBack(1);
    dq.pushFront(2);
    dq.pushBack(3);

    cout << dq.getFront() << endl;
    cout << dq.getBack() << endl;

    dq.popFront();
    
    cout << dq.getFront() << endl;

    dq.popBack();

    cout << dq.getBack() << endl;

    return 0;
}
