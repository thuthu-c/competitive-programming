#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    
    ll t; 
    
    cin >> t; 
    
    for(ll p{0}; p < t; p++){
        
        ll n; 
        cin >> n;
        
        vector<ll>pref(n+1);
        
        pref[0] = 0; 
        
        for(ll i{1}; i <= n; ++i){
             ll x; 
             cin >> x; 
             pref[i] = pref[i -1] + x; 
        }
        
        
        ll q; 
        cin >> q;
        ll l, r;

        for(ll i{0}; i <q; ++i) {
            
            cin >> l >> r; 
            cout << pref[r] - pref[l-1] << "\n"; 
        }
        
        
        
    }
	
    return 0;
}
