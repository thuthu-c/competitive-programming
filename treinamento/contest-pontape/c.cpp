#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, M; 
     cin >> N >> M; 
    ll a[N];

   

    for(auto i{0u}; i < N; ++i){
        cin>> a[i];
    }

    ll b[M];

    for(auto j{0u}; j < M; ++j){
        cin>>b[j];
    }

    ll result = 0; 

    for(auto k{0u}; k < M; ++k){
        result += a[b[k]-1]; 
    }

    cout << result << endl; 

    return 0;
}