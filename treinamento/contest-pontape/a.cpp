#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    int t; 
    ll a, b; 

    cin>>t; 

    for(auto i{0}; i < t; ++i){
        cin>> a >> b; 

        if(a > b){
            cout<<'>'<< endl;
        }
        if(a < b){
            cout<<'<'<< endl;
        }
        if(a == b){
            cout<<'='<<endl;
        }
    }

    return 0;
}