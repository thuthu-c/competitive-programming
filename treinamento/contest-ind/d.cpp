#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

bool is_even(unsigned long long int n){

    if(n%2 != 0){
        return false;
    }else return true; 
}


int main() {
    ll A, in; 
    cin >> A; 

    for(auto i{0}; i < A; ++i){
        cin>>in; 

        if(is_even(in)){
            cout << in << endl; 
        }
    }

    return 0;
}