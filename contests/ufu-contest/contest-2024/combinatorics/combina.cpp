#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

vector<string> tokenizer(string s, char token){
    // cout<<s<<endl;
    string curr_token{""};
    vector<string> tokens;
    for(auto i : s){
        // cout<<i<<endl;
        if(i == token){
            tokens.push_back(curr_token);
            curr_token = "";
        } else {
            curr_token += i;
        }
        // cout<<curr_token<<endl;
    }
    tokens.push_back(curr_token);
    return tokens;
}

int main() {
    string input;
    vector<string> combs; 

    cin >> input; 

    combs = tokenizer(input, ','); 

    for(auto c : combs){
        cout << c<< endl; 
    }


    for(auto i{0u}; i<combs.size(); ++i){
        for(auto j{i}; j < comb.size(); ++j){
            cout<< 
        }
    }


    

    return 0;
}