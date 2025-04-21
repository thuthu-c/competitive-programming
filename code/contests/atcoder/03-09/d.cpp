#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    string t; 
    ll n, ai; 
    vector<vector<string>> buckets;
    cin>> t >> n;

    for(auto i{0u}; i < n; ++i){
        cin >> ai;
        buckets.emplace_back();
        for(auto j{0u}; j<ai; ++j){
            string temp;
            cin >> temp;
            if(t.find(temp)) buckets[i].push_back(temp);
        }
    }

    string aux{""};
    ll price{0};
    while(aux!=t){
        for(auto bag : buckets){
            if(bag.empty()) continue;
            for(auto str : bag){
                if(aux + str == t){
                    ++price;
                    cout<<price;
                    return 0;
                }
                if(t.find(aux + str)) {
                    aux += str;
                    ++price;
                }
            }
        }
        if(!t.find(aux)) break;
    }

    cout<<price<<endl;


    return 0;
}