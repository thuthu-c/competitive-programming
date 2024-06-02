#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, sum{0}, passos; 
    cin >> n; 

    for(auto i{0u}; i < n*7; ++i){
        if(i%7 == 0 && i){
            cout<< sum<< endl;
            sum = 0; 
        }
        cin>> passos; 

        sum += passos; 
    }

    cout << sum << endl; 

    return 0;
}