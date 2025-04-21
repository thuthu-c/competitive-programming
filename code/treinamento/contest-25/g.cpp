#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    
    ll n; 

    while(cin>>n){
        vector<ll> ints(n);

        for(auto i{0}; i <n; ++i){
            cin>>ints[i];
        }

        vector<bool> check (n-1,false);

        for(auto j{0}; j < n-1; ++j){
            ll sum = abs(ints[j] - ints[j+1]); 
            // cout<<"A SOMA eh : " << sum << endl; 
            if(sum < n && sum){
                check[sum-1] = true;
            }
        }

        bool flasg = false;

        for(auto c : check){
            if(c == false){
                cout << "Not jolly" << endl;
                flasg = true;
                break;
            }
        }

        if(!flasg) cout << "Jolly" << endl;

    }

    return 0;
}