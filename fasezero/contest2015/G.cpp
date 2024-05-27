#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll T, N, S; 
    
    cin >> T;

    for(auto i{0u}; i<T; ++i){
        ll amntCoins{0}, sumCoins{0};
        multiset<ll> pennies;

        cin >> N >> S;

        amntCoins = N;

        for(auto j{0u}; j<N; ++j) {
            ll aux;
            cin >> aux;
            sumCoins += aux;
            pennies.insert(aux);
        }
        
        if(sumCoins < S) {
            cout << 0 << endl; 
            continue;
        }


        auto itr = pennies.end();
        
        for(auto j{0u}; j < N; ++j){
            itr--;

            if(sumCoins - *itr >= S){
                --amntCoins;
                sumCoins -= *itr;
            }
        }

        cout << amntCoins << endl;
    }
    

    return 0;
}