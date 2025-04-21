#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N; 
    cin >> N; 
    vector<pair<ll, ll>> days(N); 

    for(auto i{0u}; i < N; ++i){
        cin>>days[i].first; 
        cin>> days[i].second; 
    }
    

    return 0;
}