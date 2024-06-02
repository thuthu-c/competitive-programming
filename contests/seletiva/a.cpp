#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    
    ll n, aux, sum{0}, min{0};
    cin>> n;

    for(auto i{0}; i < n; ++i){
        cin>> aux;
        sum += aux;
        if(sum < 0){
            if(min > sum){
                min = sum; 
            }
        }
    }

    cout << abs(min) << endl;


    return 0;
}