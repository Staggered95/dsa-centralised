/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> res;
        if (!root) return res;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            //vector<int> temp;
            for (int i=0; i<n; i++) {
                Node* front = q.front();
                q.pop();
                if (i==0) res.push_back(front->data);
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
        }
        return res;
    }
};