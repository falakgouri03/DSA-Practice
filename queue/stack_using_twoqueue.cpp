#include<iostream>
using namespace std;

class MyStack {
public:
    int rear1, front1, rear2, front2;
    int q1[100], q2[100];

    MyStack() {
        rear1 = front1 = rear2 = front2 = -1;
    }

    void enqueue1(int value) {
        if (front1 == -1) front1 = 0;
        q1[++rear1] = value;
    }

    void enqueue2(int value) {
        if (front2 == -1) front2 = 0;
        q2[++rear2] = value;
    }

    int dequeue1() {
        return q1[front1++];
    }

    int dequeue2() {
        return q2[front2++];
    }

    void push(int x) {
        enqueue1(x);
    }

    int pop() {
        if (empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        while (front1 < rear1) {
            enqueue2(dequeue1());
        }
        int v = dequeue1();
        front1 = rear1 = -1;
        while (front2 <= rear2) {
            enqueue1(dequeue2());
        }
        front2 = rear2 = -1;

        return v;
    }

    int top() {
        if (empty()) return -1;
        return q1[rear1];
    }

    bool empty() {
        return (front1 == -1 || front1 > rear1);
    }
};

int main() {
    MyStack obj;

    obj.push(10);
    obj.push(20);
    obj.push(30);

    cout << obj.pop() << " popped\n";
    cout << obj.top() << " is top element\n";

    return 0;
}
