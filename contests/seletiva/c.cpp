#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<bool> visited;

void addEdge(int u, int v, int weight) {
    adj[u].push_back({v, weight});
    adj[v].push_back({u, weight});
}

void dfs(int node, int damage) {
    visited[node] = true;
    for (auto [neighbor, weight] : adj[node]) {
        if (!visited[neighbor] && weight >= damage) {
            dfs(neighbor, damage);
        }
    }
}

int countReachablePairs(int n, int damage) {
    visited.assign(n + 1, false);
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            dfs(i, damage);
            for (int j = i + 1; j <= n; ++j) {
                if (!visited[j]) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m, q;
        cin >> n >> m >> q;
        adj.assign(n + 1, vector<pair<int, int>>());
        vector<pair<int, pair<int, int>>> edges;
        for (int i = 0; i < m; ++i) {
            int u, v, weight;
            cin >> u >> v >> weight;
            edges.push_back({weight, {u, v}});
            addEdge(u, v, weight);
        }
        sort(edges.begin(), edges.end());
        while (q--) {
            int damage;
            cin >> damage;
            int count = countReachablePairs(n, damage);
            cout << count << endl;
        }
    }
    return 0;
}
