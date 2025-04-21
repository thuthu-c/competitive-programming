#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

unordered_map<ll, ll> brain;

ll rec(ll n){
    ll cont;

    if(n == 1) return 1; 

    if(brain.find(n)  != brain.end()) return brain[n]; 

    if(n%2 != 0 ){
        cont = 1 + rec(3*n + 1);
    }else{
        cont = 1 + rec(n/2);
    }

    brain[n] = cont;

    return cont;  
}


ll maxc(ll n, ll m){
    ll max_verstappen{0}; 

    for(auto i{n}; i <=m; ++i){
        ll cur = rec(i); 
        if(cur > max_verstappen){
            max_verstappen = cur; 
        }
    }

    return max_verstappen; 

}

int main() {
    ll n,m; 


    while(cin >> n >>m){

     cout << n << " " << m << " " <<  maxc(min(n,m), max(n,m)) << endl; 
        
    }

    

    return 0;
}