#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll rec_fat(ll number){

    if(number==0 || number == 1){
        return 1;
    }
    else{
        return number*rec_fat(number-1);
    } 
}

int main() {
    
    ll n, result; 

    cin>>n;

    result = rec_fat(n); 

    cout<<n<<"! = " << result<<endl; 

    return 0;
}