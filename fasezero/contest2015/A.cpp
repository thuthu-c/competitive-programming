#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll T, N, S{0}, P{0};
    string name;
    --P;
    
    
    cin >> T; 
    for(auto i{0u}; i<T; ++i){
        cin>>N;
        S = P = 0;
        --P;
        for(auto j{0u}; j<N; ++j){
            string name_read;
            ll cs, cp;
            cin >> name_read >>cs>>cp;
            if(cs > S){
                name = name_read;
                S = cs;
                P = cp;
            } else if(cp < P){
                name = name_read;
                S = cs;
                P = cp;
            }
        }
        cout<<name<<endl;
    }

    
    
    return 0;
}