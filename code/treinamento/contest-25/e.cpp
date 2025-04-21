#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll x,n;

    cin >> n >> x; 

    ll ints[n];

    for(auto i{0u}; i < n; ++i){
        cin>>ints[i];
    }

    map<ll, ll> ind; 


    for(auto j{0u}; j < n; ++j){

        if(ind.count(x - ints[j])){
            cout<<ind[x - ints[j]] <<" " << j + 1 << endl;
            return 0; 
        } 

        ind[ints[j]] = j + 1; 

        
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}