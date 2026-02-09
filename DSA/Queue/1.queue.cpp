#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
        Queue(int n) {
            this->size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void enqueue(int x) {
            if (rear == size-1) {
                cout << "Queue overflow\n";
            }
            if (front == -1 && rear == -1) {
                front++;
            }
            arr[++rear] = x;
        }

        void dequeue() {
            if (front == -1 || front > rear) {
                cout << "Queue underflow\n";
                return;
            }
            front++;
        }

        int front() {
            if (front == -1) {
                cout << "Queue is empty\n";
                return -1;
            }
            return arr[front];
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}