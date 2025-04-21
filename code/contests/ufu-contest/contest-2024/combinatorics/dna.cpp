#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main(){
    ll n;
    cin >> n;
    for(auto i{0u}; i< n; ++i){
        string s1, s2;
        cin>>s1>>s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        cout << (s1 == s2 ? "sim" : "nao")<<endl;
    }
    return 0;
}