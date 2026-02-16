/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if (!root) return -1;

        int LH = height(root->left);
        int RH = height(root->right);

        return max(LH, RH) + 1;
    }
};