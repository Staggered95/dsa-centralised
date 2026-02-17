/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        vector<int> res;
        if (!root) return res;

        queue<Node*> q;
        int currentDistance = 0;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            if (currentDistance == k) {
                while (!q.empty()) {
                    res.push_back(q.front()->data);
                    q.pop();
                }
                break;
            }
            while (n--) {
                Node* temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            currentDistance++;
        }
        return res;
    }
};

// Missing controls:
// * Shuffle
// * Repeat (all / one)
// * Queue access
// * Like / favorite
// * Add to playlist
// * Playback speed
// * Audio quality indicator
// * lyrics toggle between romaji, japanese, english, none