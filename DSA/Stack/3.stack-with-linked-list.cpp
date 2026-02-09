#include <bits/stdc++.h>
using namespace std;

class Stack
{
    class Node
    {
        public:
        int data;
        Node* next;
            Node(int value) : data(value), next(nullptr) {}
    };

    Node* top;
    int length;
    public:
        Stack() : top(nullptr), length(0) {}

        void push(int x) {
            Node* newNode = new Node(x);
            if (!top) {
                top = newNode;
                length++;
                return;
            }
            newNode->next = top;
            top = newNode;
            length++;
        }

        void pop() {
            if (!top) {
                cout << "Stack underflow\n";
                return;
            }
            Node* temp = top;
            top=top->next;
            delete temp;
            length--;
        }

        int peek() {
            if (!top) {
                cout << "Stack is empty\n";
                return -1;
            }
            return top->data;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Stack stack;
    stack.push(1);
    stack.push(2);
    cout << stack.peek() << endl;
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}