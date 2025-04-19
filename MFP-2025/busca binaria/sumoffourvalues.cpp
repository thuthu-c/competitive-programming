#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int  


bool bq(const vector<pair<ll,ll>>& v, ll target, ll i, ll j) {
    ll x = target - v[i].first - v[j].first; 

    ll left = j + 1, right = v.size() - 1;

    while (left < right) {
        ll sum = v[left].first + v[right].first; 

        if (sum == x) {
            cout << v[i].second + 1 << " " << v[j].second + 1 << " " << v[left].second + 1 << " " << v[right].second + 1 << endl;
            return true;
        } else if (sum < x) {
            ++left;
        } else {
            --right;
        }
    }

    return false;
}

int main () {
    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> v(n);

    for (ll i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i; 
    }

    sort(v.begin(), v.end()); 

    for (ll i = 0; i < n-3; ++i) {
        for(auto j = i + 1; j < n-2; ++j) {
            if (bq(v, x, i, j)) {
                return 0; 
            }
        }
        
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}