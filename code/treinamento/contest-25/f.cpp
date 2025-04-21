#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n; 
    string input; 
    string sub;

    multiset<string> subs;

    while(cin >> n >> input){
        for(auto i{0u}; i< input.size()-n+1; ++i){
        sub[0] = input[i];
        for(auto j{0u}; j < n ; ++j){
             sub+=input[i+j];
        }
        subs.insert(sub); 
        sub = "";
        }

    string temp{*subs.begin()}, supermax{*subs.begin()};
    ll cont{0}, overall{0};

    for(auto s : subs){
        // cout<< "A STRING EH " << s << endl; 
        if(s == temp){
            ++cont;
        }else{
            // cout << "A PALAVRA "<<s<<" MUDA AQUI!!! e o cont eh " << cont << endl;
            if(cont >= overall){
                supermax = temp; 
                overall = cont;
            }
            cont = 1;
        }


        temp = s;
        
    }
    if(cont >= overall){
        supermax = temp; 
        overall = cont;
    }

    cout << supermax << endl;
    subs.clear();
    }

    
     

    return 0;
}