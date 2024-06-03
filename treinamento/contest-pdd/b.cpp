#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll s2(ll i){
    if (i == 1) return 1; 
    return s2 (i-2) + i; 
}

ll s (ll i){
    if (i == 1) return 1; 

    return s2(i-2) * 2 + i;
}



int main (){

    ll n; 

    cin >> n;

    vector<ll> r(n); 

    for (auto i{0u}; i < n; ++i){
        cin >> r[i];
    }
    
    vector<ll> a(n); 
    ll cont{0};
    for(auto i : r){
        a[cont] = s(i);
        cont++;
    }

    for (auto t : a){
        cout << t << endl; 
    }



    return 0;
}