#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

vector<ll> trib(3, 1u);


int main(){
    ll num;
    cin>>num;
    
    for(auto i{3u}; i<num; ++i){
        trib.push_back(trib[i-1] + trib[i-2] + trib[i-3]);
    }
    
    cout<<trib[num-1]<<endl;


    return 0;
}