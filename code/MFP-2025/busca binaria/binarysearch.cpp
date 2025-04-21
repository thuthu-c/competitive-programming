#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

bool bb(const vector<ll> &p, ll x) {
    ll l = 1, r = p.size();
    
    while (r - l != 1) {
        ll m = (l + r) / 2;
        if (p[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }
    return p[l] == x;
}


struct Result {
    bool found;
    int swaps;
    vector<pair<ll,ll>> indices;
}; 

Result check_swaps(vector<ll>& v, ll x, ll n) {
    // Tenta sem troca
    if (bb(v, x)) return {true, 0, {}};

    // Find position of x
    ll pos_x = 0;
    for (ll i = 1; i <= n; i++) {
        if (v[i] == x) {
            pos_x = i;
            break;
        }
    }
    
    // Tenta uma troca
    for (ll i = 1; i <= n; i++) {
        swap(v[pos_x], v[i]);
        if (bb(v, x)) {
            return {true, 1, {{pos_x,i}}};
        }
        swap(v[pos_x], v[i]);
    }
    
    // Tenta duas trocas
    for (ll i = 1; i <= n; i++) {
        swap(v[pos_x], v[i]);
        for (ll j = 1; j <= n; j++) {
            if (j == i || j == pos_x) continue;
            for (ll k = j+1; k <= n; k++) {
                if (k == i || k == pos_x) continue;
                swap(v[j], v[k]);
                if (bb(v, x)) {
                    return {true, 2, {{pos_x,i}, {j,k}}};
                }
                swap(v[j], v[k]);
            }
        }
        swap(v[pos_x], v[i]);
    }
    
    return {false, 0, {}};
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    ll t; 

    cin >> t;

   
    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> permutation(n+1);


        for (ll i = 1; i <= n; ++i) {
            cin >> permutation[i];
        }


        Result res = check_swaps(permutation, x, n);

        if (res.found) {
            cout << res.swaps << "\n";
            for (auto [a, b] : res.indices) {
                cout << a << " " << b << "\n";
            }
        } else {
            cout << "-1\n";
        }
    }

    return 0; 

}