#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll T, A, cont{0};  

    cin >> T; 

    for(auto i{0u}; i < 5; ++i){
        cin >> A; 
        if(A == T){
            ++cont; 
        }
    }

    cout<< cont<< endl; 


    return 0;
}