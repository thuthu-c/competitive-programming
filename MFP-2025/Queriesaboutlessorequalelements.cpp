#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int  

ll bb(const vector<ll>& v, ll target) {
    ll left = 0, right = v.size(); 

    while (left < right) {
        ll mid = left + (right - left) / 2;
        if (v[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left; 
}


int main (){

    ll n, m; 

    cin >> n >> m; 

    vector<ll> a(n), b(m); 

    for (auto i{0}; i < n; ++i) cin >> a[i]; 
    for (auto j{0}; j < m; ++j) cin >> b[j]; 

    sort(a.begin(), a.end());

    for (auto j{0}; j < m; ++j) {
        cout << bb(a, b[j]) << " "; 
    }

    cout << endl; 


    return 0;
}