#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    ll N, K;

    cin >> N >> K; 

    vector<ll> pedras(N+1);
    vector<ll> pulos(N+1);

    for(auto i{1}; i < N + 1; ++i ){
        cin >> pedras[i];
    }

    pulos[1] = 0; 
    pulos[2] = abs(pedras[1] - pedras[2]);

    for(auto j{3}; j < N+1; ++j){
        vector<ll> custo; 
        ll start; 
        if(j - K >= 1){
            start = j - K; 
        }else start = 1; 

        for( auto h{start}; h < j; ++h){
            custo.push_back(abs(pedras[j]- pedras[h]) + pulos[h]); 
            pulos[j] = *min_element(custo.begin(), custo.end());
        }
    }

    cout << pulos[N] << endl; 



    return 0;
}