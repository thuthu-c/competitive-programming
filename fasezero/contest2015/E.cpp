#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll T, N, max = 0, bonus, res = 0; 
    cin >> T; 

    for(auto i{0u}; i < T; ++i ){
        cin>>N; 
        max = 0; res = 0;
        vector<ll> grades(N+1);
        for(auto j{0u}; j < N; ++j){
            cin >> grades[j]; 
            if(max < grades[j]) max = grades[j];
        }

        bonus = 100 - max;

        for(auto j{0u}; j < N; ++j){
            if(grades[j] + bonus >= 50 ) res++;
        }

        cout << res << endl;
    }

    return 0;
}