#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long int

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>> lista;
    for(auto i{0u}; i<n; ++i) lista.emplace_back();
    for(auto i{0u}; i<n; ++i){
        for(auto j{0u}; j<n; ++j){
            ll x;
            cin>>x;
            if(x) lista[i].push_back(j);
        }
    }
    for(auto i : lista){
        sort(i.begin(), i.end());
        for(auto j : i){
            cout<<j+1<<' ';
        }
        cout<<endl;
    }


    return 0;
}