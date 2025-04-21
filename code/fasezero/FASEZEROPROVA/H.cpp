#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll T, N;
    vector<ll> primes = { 2, 3, 5, 7, 11};

    cin >> T;

    for(auto i{0u}; i< T; ++i){
        bool res = false;
        ll x, y, dist =  ;
        

        cin >> N;

        for (auto i{1u}; i < N/2; ++i)
        {
            if(find(primes.begin(), primes.end(), i) == primes.end() && find(primes.begin(), primes.end(), N-i) == primes.end()){
                possRes.insert({i, N-i});
                cout << possRes[{i, N-i}] << " " << i << " " << N-i << endl;
                res = true;
                break;
            }
        }

        if(!res) cout << -1 << endl;        
    }

    return 0;
}