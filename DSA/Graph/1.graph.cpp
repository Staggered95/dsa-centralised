#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertices, edges;

    cout << "Enter the no. of vertice: "; cin >> vertices;
    cout << "Enter the no. of edges: "; cin >> edges;

    unordered_map<int, list<int>> adjList;

    for (int i=0; i<edges; i++) {
        int u, v;
        cout << "Enter connection (like: 2 5): ";
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (const auto& item : adjList) {
        int f = item.first;
        cout << "Connections of " << f << " are: ";
        for (int s : item.second) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}