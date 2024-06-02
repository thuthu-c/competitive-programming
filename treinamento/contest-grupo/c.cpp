#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, t, idx=0, a,b;
    string s;

    cin>>n;
    cin>>s;

    bool oi [3] = {0,0,0};

    for(auto i : s){
        ++idx;
        if(i == 'A'){
            oi[0] = true;
        }
        if(i == 'B'){
            oi[1] = true;
        }
        if(i == 'C'){
            oi[2] = true;
        }
        if(oi[0] && oi[1] && oi[2]){
            cout << idx<<endl;
            return 0;
        }
    }

    return 0;
}