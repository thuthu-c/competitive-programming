#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;
    cin >> n >> m;
    
    // Lista de adjacência: {destino, peso}
    vector<vector<pair<ll,ll>>> adj(n + 1);
    
    // Leitura do grafo
    for(ll i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    
    // Dijkstra
    vector<ll> dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<>> pq;
    pq.push({0, 1});
    
    while(!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        
        if(d > dist[u]) continue;
        
        for(auto [v, w] : adj[u]) {
            if(dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    // Impressão dos resultados
    for(ll i = 1; i <= n; i++) {
        if(i > 1) cout << " ";
        cout << dist[i];
    }
    cout << "\n";
    
    return 0;
}