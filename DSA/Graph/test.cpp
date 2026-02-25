class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);

        for (const auto &i : edges) {
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
    }
};