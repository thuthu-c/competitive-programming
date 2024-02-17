#include <bits/stdc++.h> 
using namespace std;

int main(){
    unsigned long long int n, counter =0; 

    cin>>n; 

    unsigned long long int input [n];

    for(unsigned long long int i{0}; i < n; ++i){
        cin>>input[i]; 
    }

    for(unsigned long long int j{0}; j < n-1; ++j){
        while(input[j+1] < input[j]){
            ++input[j+1];
            ++counter;
        }
    }
    
    cout<<counter;

    return 0;
}