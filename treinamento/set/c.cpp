#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main(){
    ll n,m,l;
    cin>>n;
    set<ll> a,b,c;
    ll bla, q;

    for(auto i{0}; i< n; ++i){
        cin>>bla;
        a.insert(bla);
    }

    cin>>m;

    for(auto i{0}; i< m; ++i){
        cin>>bla;
        b.insert(bla);
    }

    cin>>l;

    for(auto i{0}; i< l; ++i){
        cin>>bla;
        c.insert(bla);
    }
    cin>>q;
    
    set<ll> sums;
    for(auto i{a.begin()}; i != a.end(); ++i){
        for(auto j{b.begin()}; j!=b.end();++j){
            for(auto k{c.begin()}; k!=c.end(); ++k){
                sums.insert(*i+*j+*k);
            }
        }
    }
    
    for(auto i{0u}; i < q; ++i){
        ll x;
        cin>>x;
        cout<<(sums.find(x) != sums.end() ? "Yes" : "No") << endl;
    }    


    return 0;
}