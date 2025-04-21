#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, M;
    string action; 

    cin >> N >> M; 

    ll total{N};

    for(auto i{0u}; i < M; ++i){
        cin>>action; 
        if(action == "fechou"){
            total -= 1; 
            total += 2; 
        }
        if(action == "clicou"){
            total -= 1; 
        }

    }

    cout<< total << endl; 

    return 0;
}