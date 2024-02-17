#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main(){
    ll res{1};
    for(auto i{0}; i<3; ++i){
        ll a;
        cin>>a;
        res*=a;
    }
    cout<<res<<endl;
}