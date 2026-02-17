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
    vector<int> topView(Node *root) {
        // code here
        vector<int> res;
        
        if (!root) return res;

        map<int, int> topNode;
        queue<pair<Node*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int n = q.size();
            for (int i=0; i<n; i++) {
                Node* frontNode = q.front().first;
                int hd = q.front().second;
                q.pop();

                if (topNode.find(hd) == topNode.end()) {
                    topNode[hd] = frontNode->data;
                }
                if (frontNode->left) q.push({frontNode->left, hd-1});
                if (frontNode->right) q.push({frontNode->right, hd+1});
            }
        }

        for (const auto& [first, second] : topNode) {
            res.push_back(second);
        }

        return res;
    }
};