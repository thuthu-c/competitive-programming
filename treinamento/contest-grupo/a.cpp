#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, max=0, t, idx=0;

    cin>>n;
    
    for(auto i{0u}; i < n; ++i){
        cin>>t;

        if(t > max){
            max = t;
            idx = i+1; 
        }
    }

    cout << idx<< endl;

    return 0;
}