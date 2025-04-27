#include <bits/stdc++.h>
using namespace std;
#define int long long

bool eh_conexo_bfs (vector<vector<int>>& grafo, int n) {
    vector<bool> visited(n + 2, false);
    queue<int> q;
    int count = 0;
    
    q.push(1);
    visited[1] = true;
    count++;
    
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        
        for(int u : grafo[v]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
                count++;
            }
        }
    }

    return count == n;
}

bool eh_arvore(vector<vector<int>>& grafo, int n, int m) {
    if (!eh_conexo_bfs(grafo, n)) {
        return false;
    }
    
    int arestas = 0;
    for(int i = 1; i <= n; i++) {
        arestas += grafo[i].size();
    }
    
    return arestas == 2*(n-1);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; 

    cin >> n >> m; 

    vector<vector<int>> grafo (n+2);
    for(int i = 0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        grafo[s].push_back(t);
        grafo[t].push_back(s);
    }

    if(eh_arvore(grafo, n, m)) cout << "BOM" << "\n";
    else{
        cout << "RUIM" << " ";

        int cont{0};

        for(auto i{1}; i <= n; ++i) cont += grafo[i].size();
        
        //tirar aresta repetida
        cont = cont/2;

        // pra ser árvore precisa ter n-1 arestas
        int precisa = n-1;

        vector<bool> visited(n+2, false);
        int count = 0;
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) {
                count++;
                queue<int> q;
                q.push(i);
                visited[i] = true;
                
                while(!q.empty()) {
                    int v = q.front();
                    q.pop();
                    for(int u : grafo[v]) {
                        if(!visited[u]) {
                            visited[u] = true;
                            q.push(u);
                        }
                    }
                }
            }
        }
        // se for conexo é só tirar arestas
            // putz tem desconexos

            // tirar ciclos

            int saiciclo =  cont - (n-count);
            
            // tem que conectar
            int conectar = count-1;
            cout << saiciclo << " " << conectar << "\n";
        } 




}