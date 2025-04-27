#include <bits/stdc++.h>
using namespace std;

int n = 10; 

signed main()
{
    string s; 
    cin >> s; 
    string a, b; 
    
    for(auto i{0}; i < s.size(); ++i){
        if(i%2 == 0){
            b.push_back(s[i]);
        }else a.push_back(s[i]); 
    }

    cout << b << "\n";
    cout << a << "\n";



}