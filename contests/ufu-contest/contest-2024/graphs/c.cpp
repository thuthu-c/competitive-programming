#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, m; 
    cin>>n >> m;

    char matrix[n][m];

    for(auto i{0u}; i < n; ++i){
        for(auto j{0u}; j < m; ++j){
            cin>>matrix[i][j];
        }
    }

    for(auto i{0u}; i < n; ++i){
        for(auto j{0u}; j < m; ++j){
            if(matrix[i][j] == '.'){
                if(i > 0 && matrix[i-1][j] == 'o') matrix[i][j] = 'o';
                else if(j > 0 && i < n && matrix[i][j-1] == 'o' && matrix[i+1][j-1] == '#') matrix[i][j] = 'o';
                else if(j < m && i < n && matrix[i][j+1] == 'o' && matrix[i+1][j+1] == '#') matrix[i][j] = 'o';
            }
        }
    }

    for(auto i{0u}; i < n; ++i){
        for(auto j{0u}; j < m; ++j){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    cout << endl; 

    return 0;
}