#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll T, N, S{-1}, P{1501};
    string name;
    
    
    cin >> T; 
    for(auto i{0u}; i<T; ++i){
        cin>>N;
        S = -1;
        P = 1501;
        for(auto j{0u}; j<N; ++j){
            string name_read;
            ll cs, cp;
            cin >> name_read >>cs>>cp;
            if(cs > S){
                name = name_read;
                S = cs;
                P = cp;
            } else if(cs == S && cp < P){
                name = name_read;
                S = cs;
                P = cp;
            }
        }
        cout<<name<<endl;
    } 
    
    return 0;
}