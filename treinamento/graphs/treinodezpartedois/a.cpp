#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ull unsigned long long int 




int main (){

    ll n, m, a, b, c; 

    cin >> n >> m; 

    vector<vector<pair<ll,ll>>> adj(n); 
    vector<ll> pred(n);
    vector<bool> visited(n, false); 

    for(auto i{0}; i < m; ++i){
        cin >> a >> b >> c; 
        a--;
        b--;
        adj[a].push_back({b, c});
    }

    vector<ll> dist(n, 1000000000000000);
    dist[0] = 0; 

    priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        ll u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();
        if (d > dist[u]) continue;
        if(!visited[u]){
            visited[u] = true;

            for (auto p : adj[u]) {
                ll v = p.first;
                ll w = p.second;

                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    //pred[]
                    pq.push({dist[v], v});
                }
            }
        }
        
    }
    


    for (int i = 0; i < n; i++) {
      cout << dist[i] << ' ';
    }
    cout<<endl;




    return 0;
}