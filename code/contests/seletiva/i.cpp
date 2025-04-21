#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

bool dfs(int node, int target) {
    if (visited[node]) return false;
    if (node == target) return true;
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (dfs(neighbor, target)) return true;
    }
    return false;
}

int main() {
    int N, M, A, B, C;
    cin >> N >> M >> A >> B >> C;
    
    adj.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if ((dfs(A, B) && dfs(B, C)) || (dfs(A, C) && dfs(C, B))) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
