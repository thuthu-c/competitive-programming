#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, k, aux, auxx, max_index{0};

    cin >> n >> k; 

    vector<pair<ll, ll>> ints;

    for(auto i{0u}; i < n; ++i){
        cin>>aux;
        cin>>auxx;

        ints.emplace_back(aux, auxx);
    }

    sort(ints.begin(), ints.end());

    for(auto j{0}; j < ints.size(); ++j){
        max_index +=ints[ints.size()-j-1].second;
        if(max_index > k){
            cout << ints[ints.size()-j-1].first+1 << endl;
            return 0;
        }
    }

    cout <<'1'<<endl; 

    return 0;
}