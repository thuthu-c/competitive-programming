#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, t, idx=0, a,b;

    cin>>n;
    cin >> a >> b;
    
    for(auto i{0u}; i < n; ++i){
        cin>>t;

        if(t == a+b){
            idx = i+1; 
        }
    }

    cout << idx<< endl;

    return 0;
}