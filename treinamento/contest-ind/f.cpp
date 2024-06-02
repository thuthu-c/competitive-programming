#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    
    set<ll> integers;
    ll num; 
    
    for (auto i{0}; i < 5; ++i){
        cin >> num; 
        integers.insert(num); 
    }

    cout << integers.size() << endl; 

    return 0;
}