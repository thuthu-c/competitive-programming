#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(ll node, vector<vector<ll>>& adj_list, vector<bool>& visited) {
    visited[node] = true;

    for (ll neighbor : adj_list[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj_list, visited);
        }
    }
}

int main() {
    ll N, M, a, b, total{0};

    cin >> N >> M;

    vector<vector<ll>> grafo(N + 1); 
    vector<bool> visited(N + 1, false); 

    for (ll i = 0; i < M; ++i) {
        cin >> a >> b;
        grafo[a].push_back(b);
    }


    for (ll i{1}; i <= N; ++i) { 
        fill(visited.begin(), visited.end(), false); 
        dfs(i, grafo, visited);
        total += count(visited.begin() + 1, visited.end(), true); 
    }

    cout << total << endl;

    return 0;
}
