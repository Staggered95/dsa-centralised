/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traversLeft(Node* root, vector<int>& left) {
        if (!root || (!root->left && !root->right)) return;
        left.push_back(root->data);
        if (root->left) {
            traversLeft(root->left, left);
        }else {
            traversLeft(root->right, left);
        }
    }

    void traversRight(Node* root, vector<int>& right) {
        if (!root || (!root->left && !root->right)) return;
        if (root->right) {
            traversRight(root->right, right);
        }else {
            traversRight(root->left, right);
        }
        right.push_back(root->data);
    }

    void traverseLeaf(Node* root, vector<int>& leaf) {
        if (!root) return;
        if (!root->left && !root->right) {
            leaf.push_back(root->data);
            return;
        }
        traverseLeaf(root->left, leaf);
        traverseLeaf(root->right, leaf);
    }

    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> left, right, leaf;
        traversLeft(root, left);
        traversRight(root, right);
        traverseLeaf(root, leaf);

        set<int> v;
        v.insert( left.begin(), left.end());
        v.insert( leaf.begin(), leaf.end());
        v.insert( right.begin(), right.end()-1);

        return v;

    }
};