#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void backtracking(vector<ll> vetor, ll indice, ll soma, ll soma_atual, vector<ll> elem, bool &flasg){
        soma_atual+= vetor[indice];

        if(soma_atual > soma){
            soma_atual -= vetor[indice];
            if(indice < vetor.size()-1) backtracking(vetor, indice+1, soma, soma_atual, elem, flasg);
             
        }

        else if(soma_atual == soma) {
            flasg = true; 
            elem.push_back(vetor[indice]); 
            for(auto i{0u};i < elem.size(); ++i){
                if(i < elem.size()-1){
                      cout << elem[i] << '+'; 
                
                }else cout<<elem[i]<< endl; 
            }
        }else{
            elem.push_back(vetor[indice]);
            backtracking(vetor, indice+1, soma, soma_atual, elem, flasg); 
        }
}

int main() {

    ll t{1}, n{1}, soma_atual{0};
    vector<ll> elem;  

    while(t != 0 && n != 0){
        bool flasg{false};
        elem.clear();
        cin>> t >> n; 
        if(!t&&!n) break;
        vector<ll> integers(n);
        for(auto i{0u}; i < n; ++i){
            cin>> integers[i]; 
        }
        
        cout << "Sums of "<< t <<':'<< endl; 
        for(auto j{0u}; j < n; ++j){
            backtracking(integers, j, t, soma_atual, elem, flasg);
        }
        if(!flasg) cout <<"NONE"<<endl; 



    }

    
    


    return 0;
}