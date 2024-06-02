#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, aux; 

    cin >> N; 

    vector<ll> numbers; 

    for(auto i{0u}; i < N; ++i){
        cin >> aux; 
        numbers.emplace_back(aux); 
    } 

    ll actual = numbers[0]; 
    ll cont{1};

    for(auto j : numbers){
        if(j != actual){
            ++cont; 
            actual = j; 
        }
    }

    cout << cont << endl; 

    return 0;
}