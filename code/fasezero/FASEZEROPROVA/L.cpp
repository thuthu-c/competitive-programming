#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N; 

    cin >> N; 
    vector<string> quartos(N+1); 
    queue<string>  idades;
    map<string, bool> dormindo;

    
    for(auto i{0u}; i < N; ++i){
        cin >> quartos[i];
    }

    for(auto j{0u}; j < N; ++j){
        string aux;
        cin >> aux;
        idades.push(aux);
        dormindo.insert({aux, false});
    }

    for(auto k{0u};  k < N; ++k){
        while(dormindo[idades.front()]) idades.pop();

        if(quartos[k] == idades.front() && k<N-1){
            cout << idades.front() << ' ';
            idades.pop(); 
            
        } else if(k<N-1){
            cout << idades.front() << ' ';
        }

        dormindo[quartos[k]] = true;
    }

    cout << idades.front()<<endl; 
    return 0;
}
