#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

bool bt(const vector<pair<ll,ll>>& v, ll target, ll i) {
    ll x = target - v[i].first; 

    ll left = i + 1, right = v.size() - 1;

    while (left < right) {
        ll sum = v[left].first + v[right].first; 

        if (sum == x) {
            cout << v[i].second + 1 << " " << v[left].second + 1 << " " << v[right].second + 1 << endl;
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
        v[i].second = i; // armazena índice original (0-based)
    }

    sort(v.begin(), v.end()); // ordena por valor

    for (ll i = 0; i < n; ++i) {
        if (bt(v, x, i)) {
            return 0; // Encontrou a resposta, para o programa
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
