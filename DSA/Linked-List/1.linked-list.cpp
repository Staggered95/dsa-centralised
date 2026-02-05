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
        Node* temp = head;
        while (temp) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int countEven() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            if (temp->value % 2 == 0) count++;
            temp = temp->next;
        }
        return count;
    }

    Node* searchWithRecursion(Node* head, int key) {
        if (head == nullptr) return nullptr;
        if (head->value == key) return head;
        return searchWithRecursion(head->next, key);
    }

    bool search(int key) {
        Node* ans = searchWithRecursion(head, key);
        if (ans) {
            return true;
        }else {
            return false;
        }
    }

    int size() {
        return length;
    }
};

int main() {

    LinkedList list;
    list.insertAtEnd(32);
    list.insertAtEnd(42);
    list.insertAtEnd(18);
    list.insertAtEnd(11);
    list.insertAtEnd(17);
    cout << boolalpha << list.search(32) << endl;

    return 0;
}