#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, sbecs{100}, max, aux;

    max = sbecs;

    cin >> n; 

    for(auto i{0}; i < n; ++i){
        cin >> aux; 

        sbecs += aux; 

        if(sbecs > max){
            max = sbecs;
        }

    }

    cout<< max << endl;

    return 0;
}