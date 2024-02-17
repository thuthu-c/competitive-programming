#include <bits/stdc++.h>
using namespace std;

struct earring
{
    unsigned long long int code; 
    char ear;
};


int main() {
    unsigned long long int n;
    
    cin>>n; 
    vector<earring> earrings(n);

    for(auto i{0u}; i < n; ++i){
        cin>>earrings[i].code;
        cin>>earrings[i].ear;
    }

    for (auto e : earrings){
        cout<<"O Brinco é composto pelo código: "<<e.code<<" e pelo lado da orelha: "<<e.ear<<endl;
    }

    unsigned long long int counter{0}; 

    for(auto j{0u}; j < n; ++j){
        for(auto k{j}; k < n; ++k){
            if(earrings[j].code == earrings[k].code && earrings[j].ear != earrings[k].ear) counter++;
        }
        cout<<counter<<endl;
    } 

    cout<<counter<<endl;




    return 0;
}