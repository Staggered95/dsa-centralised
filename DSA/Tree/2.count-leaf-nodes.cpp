int countLeafNodes(Node* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;
    int x = countLeafNodes(root->left);
    int y = countLeafNodes(root->right);
    return x+y;
}