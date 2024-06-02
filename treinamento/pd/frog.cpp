#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    ll n, sum{0}, val;
    vector<ll> f; 

    cin >>n;

    for(auto i{0}; i < n; ++i){
        cin>> val;
        
        f.emplace_back(val);
    }

    
    vector<ll> pd(n, 0);

    pd[0] = 0;

    pd[1] = abs(f[1] - f[0]); 


    for(auto j{2}; j < f.size(); ++j){
         pd[j] = min(pd[j - 1] + abs(f[j] - f[j - 1]), pd[j - 2] + abs(f[j] - f[j - 2]));
    }

    cout << pd[n-1] << endl;


    return 0;
}