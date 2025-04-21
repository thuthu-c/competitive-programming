#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll a, b, m; 

    cin>>a>>b>>m; 

    if(a%m == b%m){
        cout << "1" << endl;
    }else{
        cout<<"0" << endl;
    }

    return 0;
}