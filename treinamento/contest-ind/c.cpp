#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    
    string s, aux;
    ll n; 

    cin >> n; 
    cin >> s; 

    for(auto i{0u}; i <=n-1; ++i){

        if(s[i] == 'n' && s[i+1] == 'a'){
            s.insert(i+1, "y");
            n++;
        }
    }

    cout << s << endl; 
    return 0;
}