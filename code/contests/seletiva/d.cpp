#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

vector<vector<pii>> adj;

vector<int> dijkstra(int source, int destination, int x) {
    int n = adj.size();
    vector<int> dist(n, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        if (u == destination) {
            break;
        }

        if (dist[u] < cost) {
            continue;
        }

        for (auto &[v, w] : adj[u]) {
            int new_dist = cost + w + (u != source && v != destination ? x : 0);
            if (new_dist < dist[v]) {
                dist[v] = new_dist;
                pq.push({new_dist, v});
            }
        }
    }

    return dist;
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    adj.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    while (q--) {
        int u, v, x;
        cin >> u >> v >> x;
        vector<int> dist = dijkstra(u, v, x);
        cout << (dist[v] == INF ? -1 : dist[v]) << endl;
    }

    return 0;
}
