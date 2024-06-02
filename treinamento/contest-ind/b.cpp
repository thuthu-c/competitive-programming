#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, c{0}, run{0}; 
    string temp; 

    cin>>n; 

    vector<string> s; 

    for(auto i{0u}; i < n; ++i){
        cin>>temp;
        s.emplace_back(temp);
    }


    for(auto j{0u}; j < s.size(); ++j){
        for(auto k{j+1}; k < s.size(); ++k){
            c = 0;
            if(s[j].size() == s[k].size()){
                for(auto t : s[j]){
                    for(auto u : s[k]){
                        if(t == u){
                            ++c;
                            
                        }
                        if(c == s[k].size()) break;
                    }
                    if(c == s[k].size()) break;
                }

                cout << "O CONTADOR DE " << s[j].size() << "E DE " << s[k].size() << "TERMINOU COM" << c << endl; 

                if(c == s[k].size()){
                    ++run; 
                }
                //s.erase(s.begin()+k);
            }
        }
    }

    cout << run << endl; 

    return 0;
}