#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll sum(ll n){
    if(n == 0) return 0;

    return n %10 + sum(n/10); 
}

ll g(ll n){
    if(n < 10) return n; 
    return g(sum(n)); 
}


int main() {
    ll n; 

    while(cin >> n){
        if (n == 0) break;
        cout << g(n) << endl; 
    }

    return 0;
}