#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, sum{0}, result{0};

    cin >> n; 

    vector<ll> ints (n); 

    for(auto i{0u}; i < n ; ++i){
        cin>>ints[i]; 
        sum += ints[i]; 
    }

    sort(ints.begin(), ints.end());

    vector<ll> aux(n, sum/n);

    for(auto j{0u}; j < sum % n; ++j){
        ++aux[n - 1 - j];
    }

    for(auto k{0u}; k < n; ++k){
        result+= abs(ints[k] - aux[k]);
    }


    cout << result / 2 << endl; 





    return 0;
}