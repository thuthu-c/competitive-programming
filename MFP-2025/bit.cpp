#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

int main (){
    ll n, total{0};
    cin>>n; 

    for(ll i{1}; i <= n; ++i){
        string s; 
        cin>>s; 

        if(s == "++X" || s == "X++"){
            ++total;
        }else --total; 
    }

    cout << total << endl;


    return 0;
}