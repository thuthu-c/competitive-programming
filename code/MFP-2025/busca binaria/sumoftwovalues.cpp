#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 



bool bb(const vector<pair<ll,ll>>& v, ll target) {
    ll left = 0, right = v.size() - 1; 

    while (left < right) {
        ll sum = v[left].first + v[right].first; 

        if (sum == target) {
            cout << v[left].second + 1 << " " << v[right].second +1 << endl;
            return true;
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return false;
}



int main (){

    ll n, x; 
    ll cont{0};

    cin >> n >> x; 
    
    vector<pair<ll, ll>> v(n); 


    for(auto i{0}; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i; 
    }
        



    sort(v.begin(), v.end());

   

    if (!bb(v, x)) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}