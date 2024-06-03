#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    
    ll n; 
    vector<ll> v;
    set<ll> l; 
    ll cont{0};
    ll contt{0}, last; 

    while(cin >> n){
        v.push_back(n);
    }

    for(auto h : v){
        l.insert(h);
    }

    last = *(l.begin());
    for(auto y : v){
        if(l.find(y) != l.end()){
              cout << y << " " << count(v.begin(), v.end(), y)  << endl; 
              l.erase(y); 
        }
    }
    return 0;
}