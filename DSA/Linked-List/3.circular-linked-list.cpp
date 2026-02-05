#include <bits/stdc++.h>
using namespace std;

class CircularLinkedList
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
    Node* tail;
    int length;

    public:
        CircularLinkedList() : head(nullptr), tail(nullptr), length(0) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head=newNode;
            tail = newNode;
            tail->next = head;
            length++;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = newNode;
        length++;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head=newNode;
            tail = newNode;
            tail->next = head;
            length++;
            return;
        }
        tail->next = newNode;
        newNode->next = head;
        tail = tail->next;
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
        if (length==1) {
            delete head;
            length--;
            cout << "List deleted\n";
            return;
        }
        Node* toBeDeleted = head;
        head = head->next;
        tail->next = head;
        delete toBeDeleted;
    }

    void pop_back() {
        if (length==1) {
            delete head;
            length--;
            cout << "List deleted\n";
            return;
        }
        Node* temp = head;
        while (temp->next->next != head) {
            temp = temp->next;
        }
        temp->next = head;
        delete tail;
        tail = temp;
        length--;
    }

    void pop_at_position(int n) {
        if (n<1) return;
        if (n>length) return;
        if (n==1) {
            pop();
            return;
        }
        if (n==length) {
            pop_back();
            return;
        }
        
        Node* temp = head;
        for (int i=1; i<n-1; i++) {
            temp=temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = toBeDeleted->next;
        delete toBeDeleted;
        length--;
    }

    void traverse() {
        if (length==0) {
            cout << "No element found. Traversal not possible\n";
            return;
        }
        Node* temp = head;
        while (temp->next != head) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << temp->value << " \n";
    }

    int size() {
        return length;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    CircularLinkedList list;
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.traverse();
    list.pop_at_position(2);
    list.traverse();

    return 0;
}