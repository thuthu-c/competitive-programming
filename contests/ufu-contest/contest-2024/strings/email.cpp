#include <bits/stdc++.h>
using namespace std;

vector<string> tokenizer(string s, char token ){
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

    string email; 
    vector<string> pieces;
    vector<string> domain; 

    cin>>email; 

    pieces = tokenizer(email, '@');
    if(pieces.size() != 2){
        cout<<'0'<<endl;
        return 0;
    }

    for(auto p : pieces[0]){
        if((p > 96 && p < 123 )|| (p == 46) || (p == 95) || (p > 47 && p < 58)) continue;
        else{
            cout<<'0'<<endl;

            return 0; 
        } 
    }

    domain = tokenizer(pieces[1], '.'); 

    for(auto i{0u}; i < domain.size(); ++i){
        for(auto d : domain[i]){
            if(!(d > 96 && d < 123)){
                cout<<'0'<<endl; 
                return 0;
            } 
        }   
    }
    
    size_t position = pieces[1].rfind(".");

    if(position == pieces[1].size()-1) {
        cout <<'0'<<endl;
    
       return 0;
    }

    cout << '1' << endl; 
    return 0; 
}