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

        while 

        return ans;
    }
};