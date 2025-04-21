#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int


ll search(vector<pair<pair<ll,ll>,ll>> e, ll hour, vector<bool> &v, ll k, ll n_cities){
    for(auto i{0u}; i< e.size();++i){
        if((v[e[i].first.first-1] && !v[e[i].first.second-1]) || (!v[e[i].first.first-1] && v[e[i].first.second-1])){
            if(hour >= e[i].second){
                v[e[i].first.first-1] = v[e[i].first.second-1] = true;
                // cout<<"Adding "<< i.first.first <<' '<<i.first.second<<endl;
                remove(e.begin(), e.end(), e[i]);
                --i;
                ++n_cities;
                if(n_cities >= k) return n_cities;
            } else break;
        }
    }
    return n_cities;
}

int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<pair<pair<ll,ll>,ll>> edges(m);
    for(auto i{0u}; i<m; ++i){
        cin>> edges[i].first.first >> edges[i].first.second>>edges[i].second;
    }

    vector<bool> visited(m, false);
    visited[0] = true;

    sort(edges.begin(), edges.end(), [](pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b){
        return a.second < b.second;
    });
    ll cont{1}, h{0};
    while(true){
        // cout<<"Hora: "<<h<<endl;
        // cout<<"Entrando: "<<cont<<endl;
        cont = search(edges, h, visited, k, cont);
        // cout<<"Saindo: "<<cont<<endl;
        if(cont >= k){
            cout<<h<<endl;
            return 0;
        }
        ++h;
    }

//     for(auto e : edges){
// 
//         cout << "("<< e.first.first << ", " << e.first.second << ", " << e.second << ")"<< endl;
//     }
    
    // Montar o grafo
    // "dfs" a partir da cidade 1
    // para aquele ramo ao encontrar cidade cujo c > hora (iteracao) atual

    return 0;
}