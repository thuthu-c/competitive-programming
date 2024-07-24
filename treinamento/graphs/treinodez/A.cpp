#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, m, temp_A, temp_B; 

    cin >> n >> m; 

    vector<ll> graph[n+1];  // Using vector instead of set for adjacency list
    queue<ll> ativa; 
    vector<bool> visited(n+1, false);  // Initialize visited with false
    vector<ll> distancia(n+1, 0);
    vector<ll> p(n+1, -1);  // Initialize parent array with size n+1 and default value -1

    for (auto i = 0; i < m; ++i) {
        cin >> temp_A >> temp_B;
        graph[temp_A].push_back(temp_B);
        graph[temp_B].push_back(temp_A);
    }

    ativa.push(1);
    visited[1] = true;

    while (!ativa.empty()) {
        ll local = ativa.front();
        ativa.pop();

        for (auto vertice : graph[local]) {
            if (!visited[vertice]) {
                distancia[vertice] = distancia[local] + 1;
                visited[vertice] = true;
                p[vertice] = local;
                ativa.push(vertice);
            }
        }
    }

    if (!visited[n]) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    ll local = n; 
    ll k = distancia[n];
    vector<ll> resposta;

    while (local != -1) {  // Construct path in reverse using parent array
        resposta.push_back(local);
        local = p[local];
    }

    reverse(resposta.begin(), resposta.end());  // Reverse the path to get the correct order

    cout << k + 1 << endl;
    for (size_t i = 0; i < resposta.size(); ++i) {
        cout << resposta[i];
        if (i != resposta.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0; 
}
