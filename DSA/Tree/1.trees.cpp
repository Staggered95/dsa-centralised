#include <bits/stdc++.h>
using namespace std;

class Tree 
{
    class Node
    {
        public:
        Node* left;
        int data;
        Node* right;
            Node(int val) : left(nullptr), data(val), right(nullptr) {}
    }

    Node* root;

    public:
    Tree() : root(nullptr) {}

    void inorderTraversal(Node* root) {
        if (!root) return;

        inorderTraversal(root->left);
        cout << (root->data) << " ";
        inorderTraversal(root->right);
    }

    void preorderTraversal(Node* root) {
        if (!root) return;

        cout << (root->data) << " ";
        inorderTraversal(root->left);
        inorderTraversal(root->right);
    }

    void postorderTraversal(Node* root) {
        if (!root) return;

        inorderTraversal(root->left);
        inorderTraversal(root->right);
        cout << (root->data) << " ";
    }

    void traverse(string type) {
        if (type == "inorder") {
            inorderTraversal(root);
        } else if (type == "preorder") {
            preorderTraversal(root);
        } else {
            postorderTraversal(root);
        }
        cout << endl;
    } 

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}