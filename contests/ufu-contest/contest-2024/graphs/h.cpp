#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll bits1(ll num){
    ll hamming{0};
    while(num>0){
        hamming += num%2;
        num/=2;
    }
    return hamming;
}

int main(){
    ll b1{1}, b2{1};
    do{
        cin>>b1>>b2;
        
        auto res{b1 ^ b2};
        if(b1 || b2)cout<<bits1(res)<<endl;
    }while(b1 || b2);
}