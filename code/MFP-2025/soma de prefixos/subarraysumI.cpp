#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n; 

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }


    map<ll, ll> prefix;
    ll sum = 0, ans = 0;
    

    prefix[0] = 1;
    
    
    for (ll i = 0; i < n; i++) {
        sum += v[i];
        ll remainder = ((sum % n) + n) % n; 
        
            ans += prefix[remainder];
            prefix[remainder]++;
        
        
        
    }

    cout << ans << "\n";
    return 0;
}