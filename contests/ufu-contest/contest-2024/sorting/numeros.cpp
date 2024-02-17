#include <bits/stdc++.h>
using namespace std;

bool is_even(unsigned long long int n){

    if(n%2 != 0){
        return false;
    }else return true; 
}

int main() {
    unsigned long long int n; 
    cin>>n; 

    unsigned long long int numbers; 
    vector<unsigned long long int> odds;
    vector<unsigned long long int> even;

    for(auto i{0u}; i < n; ++i){
        cin>>numbers;
        
        if(is_even(numbers)){
            even.push_back(numbers);
        }else odds.push_back(numbers);
    }

    sort(even.begin(), even.end()); 
    sort(odds.begin(), odds.end());
    

    for(auto o : odds){
        cout<<o<<" ";
    }
    // for(auto o : even){
    //     cout<<o<<" ";
    // }

    for(auto k{0u}; k < even.size(); ++k){
        if(k == even.size()-1){
            cout << even[k] << endl;
        }else cout << even[k]<<" "; 
    }

    return 0;
}