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

        vector<int> indegree(V, 0);
        for (int i=0; i<V; i++) {
            for (auto j : adj[i]) {
                indegree[j]++;
            }
        }

        //push all vertices with indegree 0, in queue
        queue<int> q;
        for (int i=0; i<V; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        vector<int> result;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            result.push_back(node);
            
            for (auto neighbour : adj[node]) {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        return result;
    }
};