#include <bits/stdc++.h>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

    public:
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int n) {
        top++;
        if (top >= size) {
            top--;
            cout << "Stack overflow\n";
            return;
        }

        arr[top] = n;
        cout << "Inserted " << n << endl;
    }

    void pop() {
        top--;
        if (top < 0) {
            cout << "Stack underflow\n";
            top++;
            return;
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Stack stack(4);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    cout << stack.peek() << endl;
    stack.pop();
    cout << stack.peek() << endl;
    cout << boolalpha << stack.isEmpty();


    return 0;
}