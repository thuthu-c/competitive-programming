#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll  n, result; 

    cin >> n;

    result = 10;

    for(auto i{0u}; i<(n-1); ++i) result*=9; 

    cout << result << endl; 
    
    return 0;
}