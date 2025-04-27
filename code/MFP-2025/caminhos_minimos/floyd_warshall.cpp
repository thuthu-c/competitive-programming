#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 
const ll INF = 1e18;  // Increased to handle larger sums safely

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m; 
    cin >> n >> m; 

    // Validate input
    if (n <= 0 || m < 0) return 0;

    vector<vector<ll>> g(n + 1, vector<ll>(n + 1, INF)); 
    
    // Initialize edges (directed graph)
    for (ll i = 0; i < m; ++i) {
        ll u, v, w; 
        cin >> u >> v >> w;
        if (u >= 1 && u <= n && v >= 1 && v <= n && w >= 0) {
            g[u][v] = min(g[u][v], w);
        }
    }

    // Set diagonal to 0
    for (ll i = 1; i <= n; ++i) {
        g[i][i] = 0; 
    }

    // Floyd-Warshall with overflow protection
    for (ll k = 1; k <= n; ++k) {
        for (ll i = 1; i <= n; ++i) {
            for (ll j = 1; j <= n; ++j) {
                if (g[i][k] < INF && g[k][j] < INF) {
                    if (g[i][k] + g[k][j] < g[i][j]) {  // Check if sum is better
                        if (g[i][k] + g[k][j] >= 0) {   // Check for overflow
                            g[i][j] = g[i][k] + g[k][j];
                        }
                    }
                }
            }
        }
    }

    // Print shortest paths from node 1
    for (ll i = 1; i <= n; ++i) {
        if (i > 1) cout << " ";
        cout << (g[1][i] >= INF ? -1 : g[1][i]);
    }
    cout << "\n";

    return 0;
}