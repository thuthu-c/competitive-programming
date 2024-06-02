#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n; 
    cin >> n;

    vector<ll> N(n);

    for(auto i{0u}; i < n; ++i){
        cin>>N[i];
    }

    sort(N.begin(), N.end());
    N.erase( unique( N.begin(), N.end() ), N.end() );

    cout << N.size() << endl; 
    

    return 0;
}