#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, aux; 
    cin>>n; 

    vector<ll> f(3*n), empty; 

    for(auto i{0u}; i < 3*n; ++i){
        cin>> aux; 

        ++f[aux]; 

        if(f[aux] == 2){
            empty.emplace_back(aux);
        }
    }

    for(auto j{0u}; j < n; ++j){
        cout << empty[j] << (j == n - 1 ? '\n' : ' ');
    }




    return 0;
}