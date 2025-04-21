#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    set<string> str;
    string oi;

    ll n; 

    cin>>n;

    for(auto i{0u}; i < n; ++i){
        cin>>oi;
        str.insert(oi);

    }

    cout<<str.size()<< endl;

    return 0;
}