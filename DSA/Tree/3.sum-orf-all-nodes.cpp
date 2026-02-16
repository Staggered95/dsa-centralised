

int sumOfAllNodes(Node* root) {
    if (!node) return 0;
    
    int LS = sumOfAllNodes(root->left);
    int RS = sumOfAllNodes(root->right);

    return LS+RS+root->data;
}