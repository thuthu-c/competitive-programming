#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int  


bool bb(const vector<ll>& v, ll target) {
    ll left = 0, right = v.size()-1; 

    while (left < right) {
        ll sum = v[left] + v[right]; 

        if (sum == target) {
            cout << v[left] << " " << v[right] << endl;
            return true;
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return false;
}

int main (){

    ll n, target; 

    cin >> n; 

    vector<ll> v(n); 

    for(auto i{0}; i < n;  ++i){
        cin >> v[i]; 
    } 

    cin >> target; 


    bb(v, target); 

    return 0;

}