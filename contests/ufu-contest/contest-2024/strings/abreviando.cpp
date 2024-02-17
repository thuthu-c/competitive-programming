#include <bits/stdc++.h>

using namespace std;

vector<string> tokenizer(string s){
    // cout<<s<<endl;
    string curr_token{""};
    vector<string> tokens;
    for(auto i : s){
        // cout<<i<<endl;
        if(i == ' '){
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


void abrevia(string &s){
    char c{s[0]};
    s = "";
    s +=c;
    s+='.';

}

int main(){
    string str;
    getline(cin,str);
    auto tks{tokenizer(str)};
    
    for(auto i{1u}; i<tks.size()-1; ++i){
        if(tks[i] == "de" || tks[i] == "da" || tks[i] == "do" ||tks[i] == "dos" || tks[i] == "e"){
            tks[i] = "";
        }
        else abrevia(tks[i]);
    }
    for(auto i{0}; i<tks.size();++i){
        cout<<tks[i];
        if(i!=tks.size()-1 && tks[i]!="")cout<<' ';
    }
    cout<<endl;

    return 0;
}