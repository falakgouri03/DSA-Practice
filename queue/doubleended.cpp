#include<iostream>
using namespace std;

int q[5];
int front = -1;
int rear = -1;
int maxsize = 5;

void insert_front(int val) {
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1)) {
        cout << "Queue is full" << endl;
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = maxsize - 1;
    }
    else {
        front--;
    }

    q[front] = val;
}

void insert_rear(int val) {
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1)) {
        cout << "Queue is full" << endl;
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else if (rear == maxsize - 1) {
        rear = 0;
    }
    else {
        rear++;
    }

    q[rear] = val;
}

void delete_front() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
     int val=q[front];
    cout << q[front] << " is deleted from front" << endl;

    if (front == rear) {
        front = rear = -1;  // Only one element was there
    }
    else if (front == maxsize - 1) {
        front = 0;
    }
    else {
        front++;
    }
}

void delete_rear() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
     int val=q[rear];
    cout << q[rear] << " is deleted from rear" << endl;

    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = maxsize - 1;
    }
    else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    int i = front;

    while (true) {
        cout << q[i] << " ";

        if (i == rear)
            break;
        if (i == maxsize - 1)
            i = 0;
        else
            i++;
    }

    cout << endl;
}


int main() {
    insert_front(10);
    insert_front(20);
    insert_rear(30);
    display();
    delete_front();
    display();
    delete_rear();
    display();


    return 0;
}
