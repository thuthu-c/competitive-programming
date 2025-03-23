#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

int main (){
    ll a, b; 
    cin >> a >> b; 

    if((a + b) <= 50){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0; 
}