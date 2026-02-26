class Solution {
  public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& rec) {
        visited[node] = 1;
        rec[node] = 1;

        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
                if (dfs(neighbour, adj, visited, rec)) return true;
            } else if (rec[neighbour]) {
                return true;
            }
        }

        rec[node] = 0;
        return false;
    }
  
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>> adj(N);
        
        for (auto &i : prerequisites) {
            int u = i.first;
            int v = i.second;
            adj[v].push_back(u);
        }

        vector<int> visited(N, 0);
        vector<int> rec(N, 0);

        for (int i=0; i<N; i++) {
            if (!visited[i]) {
                //dfs
                if (dfs(i, adj, visited, rec)) return false;
            }
        }

        return true;
    }
};


class Solution {
  public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& rec) {
        visited[node] = true;
        rec[node] = 1;

        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
                if (dfs(neighbour, adj, visited, rec)) return true;
            } else if (rec[neighbour]) {
                return true;
            }
        }

        rec[node] = 0;
        return false;
    }
  
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<vector<int>> adj;

        for (const auto &i : prerequisites) {
            int u = i.first;
            int v = i.second;
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);
        vector<int> rec(n, 0);

        for (int i=0; i<n; i++) {
            if (!visited[i]) {
                
            }
        }
    }
};