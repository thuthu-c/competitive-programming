#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

void mdc(ll a, ll b){
    ll aux;
    
    do {
        aux = a % b;
        a = b;
        b = aux;
    } while (aux != 0);

    cout << a << endl;
}

int main() {
    ll n, x, y;  
    
    cin>>n; 

    for(auto i{0u}; i < n; ++i){
        cin>>x; 
        cin>>y; 
        mdc(x,y);
    }

    return 0;
}