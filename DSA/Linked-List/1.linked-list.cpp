#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
    class Node
    {
        public:
        int value;
        Node* next;
            Node(int val) {
                value = val;
                next = nullptr;
            }
    };

    Node* head;
    int length;

    public:
        LinkedList() : head(nullptr), length(0) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        length++;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            length++;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        length++;
    }

    void insert(int value, int position) {
        if (position<=1) {
            insert(value);
            return;
        } 

        if (position > length) {
            cout << "Position doesn't exist. inserting at the end" << endl;
            insertAtEnd(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i=1; i<position-1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        length++;
    }

    void pop() {
        if (!head) {
            cout << "Nothing to pop!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        length--;
    }

    void pop_back() {
        if (!head) {
            cout << "Nothing to pop!" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = nullptr;
        delete toBeDeleted;
    }



    void traverse() {
        Node* temp = head;
        while (temp) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }

    int size() {
        return length;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LinkedList list;
    // list.insert(3);
    // list.insert(4);
    // list.insert(5);
    // list.insert(6);
    list.pop_back();
    list.traverse();

    return 0;
}