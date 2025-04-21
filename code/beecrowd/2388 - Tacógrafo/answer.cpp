#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N, T , V, total{0}; 
        cin >> N; 
        
    for(auto i{0u}; i < N; ++i){
        cin >> T >> V; 
        total += (T * V); 
        cout<< "O total até o momento é : " << total << endl; 
    }

    cout << total <<  endl; 

    return 0;
}