class Solution {
  public:
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool>& isVisited, vector<int>& result) {
        isVisited[node] = true;
        result.push_back(node);

        for (auto neighbour : adj[node]) {
            if (!isVisited[neighbour]) {
                dfsHelper(neighbour, adj, isVisited, result);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int b = adj.size();
        vector<bool> isVisited(b, false);
        vector<int> result;

        dfsHelper(0, adj, isVisited, result);

        return result;

    }
};