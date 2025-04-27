#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = 1e18;

vector<int> min_path(int a, int b, int k, vector<vector<pair<int,int>>>& grafo) {
    // Min heap to store {distance, vertex}
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, a});
    
    // Store distances found for destination only
    vector<int> paths;
    
    // Track visited count per vertex to avoid cycles
    vector<int> visited(grafo.size(), 0);
    
    while(!pq.empty() && paths.size() < k) {
        auto [d, u] = pq.top();
        pq.pop();
        
        // Found a path to destination
        if(u == b) {
            paths.push_back(d);
            if(paths.size() == k) break;
        }
        
        // Limit visits per vertex to avoid cycles
        if(visited[u] >= k) continue;
        visited[u]++;
        
        for(auto [v, w] : grafo[u]) {
            pq.push({d + w, v});
        }
    }
    
    return paths;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<pair<int,int>>> grafo(n+1);
    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        grafo[a].push_back({b, c});
    }
    
    vector<int> dist = min_path(1, n, k, grafo);

    sort(dist.begin(), dist.end());
    
    for(int i = 0; i < k && i < dist.size(); i++) {
        cout << dist[i] << " ";
    }
    cout << "\n";
    
    return 0;
}