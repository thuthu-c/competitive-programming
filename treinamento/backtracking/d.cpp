#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n; 
    cin >>n; 
    vector<ll> nums(n); 
    vector<ll> aux; 

    for(auto i{0u}; i < n; ++i){
        cin>>nums[i]; 
    }

    for(auto j{1u}; j < n; ++j){
        if(nums[j] < nums[j-1]){
            for(auto k{nums[j-1]}; k > nums[j]; --k){
                aux.push_back(k); 
            }
            // aux.push_back(nums[j]); 
        }else{
            for(auto k{nums[j-1]}; k < nums[j]; ++k){
                aux.push_back(k); 
            }
            // aux.push_back(nums[j]); 
        }
    }
    aux.push_back(nums[n-1]);

    for ( auto m : aux){
        cout << m << ' '; 
    }

    return 0;
}