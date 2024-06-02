#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int


void backtracking(int posicao, vector<string>conjunto, vector<bool> conj_bool, int tam_conj){
    int i{0}, j{0};
    
    if(posicao == tam_conj){
        while(i < tam_conj){
            cout<<conjunto[i];
            if(i == tam_conj){
                cout<<',';
            }
                    
            ++i;
        }
            cout << endl;
    }
    else{
        conj_bool[posicao] = 1; 
        backtracking(posicao+1, conjunto, conj_bool, tam_conj);
        conj_bool[posicao] = 0;
        backtracking(posicao+1, conjunto, conj_bool, tam_conj);
    }
}

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
     vector<bool> bools_conj(combs.size(), 0); 


   backtracking(0,combs, bools_conj, combs.size());

    

    return 0;
}