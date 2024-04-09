#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, total{0}; 

    cin >> N; 

    for (auto i{1u}; i <= N; ++i){
        total = i; 
        for(auto j{0}; j < 3; ++j){
            if(j != 2) {
            cout << total << " "; 
            total *=i; 
            }else{
                cout << total; 
            }
           
        }
        cout << endl; 
       
    }

    return 0;
}