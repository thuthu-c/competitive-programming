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

int main() {
    
    vector<string> aux;
    string input;

    getline(cin, input);
    aux = tokenizer(input);
    vector<unsigned long long int> inputs(aux.size());
    for(auto a{0u}; a < aux.size(); ++a){
        inputs[a] = stoi(aux[a]);
    } 

    sort(inputs.begin(), inputs.end());

    for(auto i : inputs){
        bool flasg = true; 
        if(i == 1){
            cout<<'A'; 
            flasg = false;
        }
        if(i == 11){
            cout<<'J';
            flasg = false;
        }
        if(i == 12){
            cout<<'Q';
            flasg = false;
        }
        if(i == 13){
            cout<<'K';
            flasg = false;
        }
        if(flasg){
            cout<<i; 
        }
        cout<<' ';
    }
    cout<<endl;

    return 0;
}