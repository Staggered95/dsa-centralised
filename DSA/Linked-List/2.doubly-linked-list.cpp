#include <bits/stdc++.h>
using namespace std;

class DoublyLinkedList
{
    class Node {
        public:
        Node* prev;
        int data;
        Node* next;
            Node(int val) : prev(nullptr), data(val), next(nullptr) {}
    };

    int length;
    Node* head;
    Node* tail;

    public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), length(0) {};

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            tail = newNode;
            length++;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        length++;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            tail = newNode;
            length++;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) temp=temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        length++;
    }

    void insert(int value, int position) {
        if (position <= 1) {
            insert(value);
            return;
        }
        if (position > length) {
            insertAtEnd(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i=1; i<position-1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        newNode->prev = temp;
        temp->next = newNode;
        length++;
    }

    void traverse() {
        cout << "\nPrinting Doubly LinkedList\n";
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }

    void traverseReverse() {
        cout << "\nPrinting Reverse of Doubly LinkedList\n";
        Node* temp = tail;
        while (temp) {
            cout << temp->data << " ";
            temp=temp->prev;
        }
        cout << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    srand(time(0));

    DoublyLinkedList list;
    for (int i=0; i<8; i++) {
        int num = rand()%100+1;
        cout << num << " ";
        list.insert(num, 5);
    }
    cout << endl;

    list.traverse();
    list.traverseReverse();

    return 0;
}