#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    char p, q; 

    vector<ll> fixo{3, 1, 4, 1, 5, 9}; 

    cin>> p >> q; 
    ll sum{0};

    for(auto i{p-65}; i < q-65; ++i){
        sum += fixo [i]; 
    }

    cout << sum << endl; 
    



    return 0;
}