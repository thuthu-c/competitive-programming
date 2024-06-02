#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    
    ll n, m, q;

    cin >> n >>m;

    vector<ll> array(n);

    for(auto i{0u}; i < n; ++i){
        cin>>array[i];
    }

    unordered_set<ll> visited;
    vector<ll> search(n, 1);

    
    visited.insert(array[n-1]);
    for(auto j {n-2}; j >= 0; --j){
        if(visited.find(array[j]) == visited.end()){
            search[j] = search[j + 1] + 1; 
            visited.insert(array[j]);
        }else search[j] = search[j+1];
    }

    while(m > 0){
        cin >> q; 
        cout << search[q-1] << endl;
        --m;
    }

    return 0;
}