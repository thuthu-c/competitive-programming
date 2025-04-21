#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, m;
    
    cin>>n>>m;
    ll matrix[n][m], cont = n+1;
    bool intriga[n][m];

    for(auto i{0u}; i < n; ++i){
        for(auto j{0u}; j < m; ++j){
            cin>>matrix[i][j];
            intriga[i][j] = 1;
            // ++cont;
        }
    }

    for(auto k{0u}; k < n; ++k){
        for(auto l{k}; l < m; ++l){
            if(intriga[k][l]) {
                intriga[k][l] = 0;
                --cont;
            }
        }
    }

    cout << cont << endl;
    return 0;
}