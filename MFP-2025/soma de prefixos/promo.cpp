#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main (){

    ll n, q; 

    cin >> n >> q;

    vector<ll> p(n);

    for (ll i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p.rbegin(), p.rend());

    vector <ll> prefix(n+1); 
    prefix[0] = 0;

    for(auto i{0}; i < n; ++i){
        prefix[i + 1] = prefix[i] + p[i];
    }

    while(q--){
        ll x, y;
        cin >> x >> y;
        cout << prefix[x] - prefix[x-y]<< endl;

    }


    return 0;
}