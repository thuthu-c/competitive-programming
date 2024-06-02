#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main(){
    ll n, m, o, cont{0};
    
    cin>>n>>m;
    vector<vector<bool>> intriga(n);
    
    for(auto &i : intriga){
        i = vector<bool>(n, 0);
    }

    for(auto i{0u}; i < m; ++i){
        vector<ll> foto;
        for(auto j{0u}; j < n; ++j){
            cin>>o;
            foto.push_back(o);
        }
        for(auto k{1u}; k < n; ++k){
            intriga[foto[k-1]-1][foto[k]-1] = 1;
            if(foto[k-1] != foto[k]) ++cont; 
        }
    }

    cout<<n-cont/2<<endl;

    return 0;
}