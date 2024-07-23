#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){

    ll n, m, temp_A, temp_B; 

    cin >> n >> m; 

    set<ll> graph[n+1];
    queue<ll> ativa; 
    bool visited[n+1]; 
    vector<ll> distancia(n+1, 0);
    ll p[n];
    

    for (auto i{0}; i < m; ++i){
        cin>>temp_A >> temp_B;

        graph[temp_A].insert(temp_B);
        graph[temp_B].insert(temp_A);
        cout<< "O B.O NÃO É AQUI"<< endl; 
    }

    cout << "saiu do for???"<< endl; 
    ativa.push(1);
    visited[1] = true;
    cout<<"visted é: " << visited[1] << endl; 

   

    while(!ativa.empty()){
        ll local = ativa.front();
        cout << "LOCAL É: " << local << endl;  
        ativa.pop();

        
        for (auto vi : visited){
        cout << "visited: " << vi << endl;
        } 

        for(auto vertice : graph[local]){
            cout << "visited[vertice]: " << visited[vertice] << endl; 
            cout << "vertice: "<< vertice << endl;

            if(!visited[vertice]){
                distancia[vertice] = distancia[local] + 1;
                visited[vertice] = true;
                p[vertice]  = local;
                ativa.push(vertice);
            }
        }
    }

    if(!visited[n]){
        cout<<"IMPOSSIBLE" << endl;
        return 0;
    } 

    cout<<"o problema sou eu" << endl;

    ll local = n; 
    ll k = distancia[n];
    cout<< distancia[n-1] << endl; 
    vector<ll> resposta(k+1);

    for(auto i{k}; i >= 0; --i){
        cout<<"o problema sou eu" << endl;
        resposta[i] = local;
        local = p[local];
    }

    cout<< k + 1 << endl;

    for (auto i{0}; i <=k; ++i){
        if(i != k){
            cout << resposta[i] << " ";
        }else cout << resposta[i] << endl; 
        
    }


    return 0; 
}