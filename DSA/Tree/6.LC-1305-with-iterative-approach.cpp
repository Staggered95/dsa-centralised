/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void pushLeft(TreeNode* root, stack<TreeNode*>& s) {
      while (root) {
        s.push(root);
        root = root->left;
      }
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        stack<TreeNode*> s1, s2;
        pushLeft(root1, s1);
        pushLeft(root2, s2);

        //can be minimized to just one if-else as well
        while (!s1.empty() || !s2.empty()) {
            if (s1.empty()) {
                TreeNode* curr = s2.top();
                s2.pop();
                ans.push_back(curr->val);
                pushLeft(curr->right, s2);
            } else if (s2.empty()) {
                TreeNode* curr = s1.top();
                s1.pop();
                ans.push_back(curr->val);
                pushLeft(curr->right, s1);
            } else if (s1.top()->val <= s2.top()->val) {
                TreeNode* curr = s1.top();
                s1.pop();
                ans.push_back(curr->val);
                pushLeft(curr->right, s1);
            } else {
                TreeNode* curr = s2.top();
                s2.pop();
                ans.push_back(curr->val);
                pushLeft(curr->right, s2);
            }
        }

        return ans;
    }
};