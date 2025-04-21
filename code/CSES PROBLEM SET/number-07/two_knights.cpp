#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {

    ll n; 
    cin >> n; 

    for(auto i{1u}; i <=n; ++i){
        cout<<((long)((pow(i,2)*(pow(i,2)-1))/2)- (4*(i-1)*(i-2))) << endl;  
    }

    
    

    return 0;
}