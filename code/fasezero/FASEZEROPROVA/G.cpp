#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, K, pos = 0, res = 0;
    vector<ll> dist(N+2), amount(N+2);

    cin >> N >> K;

    dist[0] = 0;
    amount[0] = K;

    for(auto i{1u}; i<N; ++i){
        cin >> dist[i];
    }

    for(auto i{1u}; i<N; ++i){
        cin >> amount[i];
    }

    while(pos != N){
       if(K >= dist[pos+1]){
        ++pos;
       }
       K = amount[pos];  
    }

    cout << res << endl;

    return 0;
}