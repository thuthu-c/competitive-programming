#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

vector<string> tokenizer(string s, char tk){
    // cout<<s<<endl;
    string curr_token{""};
    vector<string> tokens;
    for(auto i : s){
        // cout<<i<<endl;
        if(i == tk){
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
    string s;
    int cont{0};

    cin>> s;

    vector<string> buckets{tokenizer(s, '|')};
    
    for(auto i : buckets){
        if(cont != 1) cout<<i;
        ++cont;
    }
    cout<<endl;

    return 0;
}