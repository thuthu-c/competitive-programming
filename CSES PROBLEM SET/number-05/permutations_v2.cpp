#include <bits/stdc++.h> 
using namespace std;

int main(){
    unsigned long long int n; 
    cin>>n; 

    if(n < 4 && n > 1){
        cout<<"NO SOLUTION";

    }else{
        for(unsigned long long int i{2}; i <= n; i+=2){
            cout<<i<<" "; 
        }
        for(unsigned long long int j{1}; j <= n; j+=2){
            cout<<j<<" "; 
        }
    }

    return 0;
}