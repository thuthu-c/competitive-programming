#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    vector<ll> numbers(8); 
    for(auto i{0u}; i < 8; ++i){
        cin >> numbers[i]; 

        if(i > 0){
            if(numbers[i] < numbers[i-1]){
                cout << "No" << endl; 
                return 0; 
            }
        }

        if(numbers[i]%25 != 0){
                cout << "No" << endl; 
                return 0; 
            }

            if(!(numbers[i] >= 100 && numbers[i] <= 675)){
                cout << "No" << endl; 
                return 0;
            }
    }

    cout << "Yes" << endl; 
    return 0; 
}