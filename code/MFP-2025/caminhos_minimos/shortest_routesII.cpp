#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = 1e18; // Changed to handle larger sums

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, q;
    cin >> n >> m >> q;

    // Matrix for Floyd-Warshall
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));
    
    // Initialize diagonal with 0
    for(int i = 1; i <= n; i++) {
        dist[i][i] = 0;
    }
    
    // Read edges
    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        // Keep minimum weight if multiple edges exist
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }
    
    // Floyd-Warshall
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    
    // Process queries
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << (dist[a][b] == INF ? -1 : dist[a][b]) << "\n";
    }
    
    return 0;
}