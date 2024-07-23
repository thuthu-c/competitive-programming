#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll N, max{0}, aux, max_even{0}, max_odd{0}; 
    cin >> N; 

    vector<ll> even; 
    vector<ll> odds; 

    for(auto i{0}; i < N; ++i){
        cin >> aux; 
        if(aux%2 ==0){
            even.push_back(aux);
        }else odds.push_back(aux);
    }

    sort(even.begin(), even.end());
    sort(odds.begin(), odds.end());
    
    if(even.size() >= 2){
        max_even = even[even.size() -2] + even[even.size() -1 ];
    }
    if(odds.size() >= 2){
        max_odd = odds[odds.size() -2] + odds[odds.size() -1 ]; 
    }

    if(max_even > max_odd) max = max_even;
    else max = max_odd; 
    
   

    if(!max){
        cout << "-1" << endl;
    }else cout << max << endl;

    return 0;
}