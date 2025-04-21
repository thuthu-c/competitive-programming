#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int  

bool f(ll m, vector<ll>& machines, ll t) {
    ll sum = 0;
    for (ll i = 0; i < machines.size(); ++i) {
        sum += m / machines[i];
        if (sum >= t) return true; 
        
        if (m / machines[i] > t) return true;
    }
    return false;
}

ll bb(ll l, ll r, vector<ll>& machines, ll t) {
    while (l < r) {
        ll m = l + (r - l) / 2;
        if (f(m, machines, t)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, t;
    cin >> n >> t;

    vector<ll> machines(n);
    for (ll i = 0; i < n; ++i) {
        cin >> machines[i];
    }

    ll min_time = *min_element(machines.begin(), machines.end());
    cout << bb(1, min_time * t, machines, t) << endl;

    return 0;
}