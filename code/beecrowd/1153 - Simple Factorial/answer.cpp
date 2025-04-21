#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, total{1}; 

    cin >> N;

    for(auto i{2u}; i <= N; ++i){
        total *= i; 
    }

    cout << total << endl; 

    return 0;
}