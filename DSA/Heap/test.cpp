/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool isHeap(Node* tree) {
        // code here
        if (!tree->left && !tree->right) return true;
        if (!tree->left && tree->right) return false;
        if (tree->left && !tree->right) return tree->left->data < tree->data;

        int p = tree->data;
        int l = tree->left->data;
        int r = tree->right->data;
        if (p < l || p < r) {
            return false;
        } else {
            return true;
        }
        return isHeap(tree->left) && isHeap(tree->right);
    }
};













class Solution {
public:
    bool isHeap(Node* tree) {
        if (!tree) return true;

        std::queue<Node*> q;
        q.push(tree);
        bool found_null = false;

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            if (current == nullptr) {
                found_null = true;
            } else {
                if (found_null) { // Node after a null: not complete
                    return false;
                }

                // Min-heap property: parent <= children
                if (current->left) {
                    if (current->data > current->left->data) return false;
                    q.push(current->left);
                } else {
                    q.push(nullptr); // Mark position for completeness check
                }

                if (current->right) {
                    if (current->data > current->right->data) return false;
                    q.push(current->right);
                } else {
                    q.push(nullptr); // Mark position for completeness check
                }
            }
        }
        return true;
    }
};