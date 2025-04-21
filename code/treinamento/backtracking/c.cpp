#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N; 
    string s, t; 

    cin>> N >> s >> t; 

    for(auto i{0u}; i < N; ++i){
        if((t[i] ==  '1' && s[i] == 'l') || (t[i] == '0' && s[i] == 'o') || (s[i] == '0' && t[i] == 'o') || (s[i] ==  '1' && t[i] == 'l') || s[i] == t[i] ){
            continue;
        }else{
            cout << "No" << endl; 
            return 0; 
        }
    }

    cout << "Yes" << endl; 

    return 0;
}