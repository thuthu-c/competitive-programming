#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool dfs(ll node, vector<vector<ll>>& adj_list, vector<ll>& colors) {
    // colors[node] = -1;

    for (ll neighbor : adj_list[node]) {
        if (colors[neighbor]==-1) {
            colors[neighbor] = 1 - colors[node];
            return dfs(neighbor, adj_list, colors);
        }
        else if(colors[neighbor] == colors[node]){
            return false;
        }
    }

    return true; 
}

int main (){

    ll N, M, a, b, total{0};

    while (true){
        cin >> N; 
        if(N == 0) break;
        cin >> M; 

        vector<vector<ll>> grafo(N + 1); 
        vector<ll> colors(N + 1, -1);
        bool resultado {false};  

        for (ll i = 0; i < M; ++i) {
            cin >> a >> b;
            grafo[a].push_back(b);
        }

        // for (ll i{0}; i < N; ++i) { 
            fill(colors.begin(), colors.end(), -1); 
            colors[0] = 1;
            resultado = resultado || dfs(0, grafo, colors);
        // }

        if (!resultado){
            cout <<"NOT BICOLORABLE." << endl;
        }else cout <<"BICOLORABLE." << endl;
    }
    

    return 0; 
}