#include <bits/stdc++.h>

using namespace std;

int main(){
    string password; 
    bool flasg = false, flag = false, flask = false, flake = true;

    cin >> password; 

    if(password.size() < 8){
        flake = false;
        cout<<"minimo de 8 caracteres"<<endl;
    }
    for(char p : password){
        if(p > 64 && p < 91 ){
            flasg = true; 
        }
        if(p > 96 && p < 123){
            flag = true;
        }
        if(p > 47 && p < 58){
            flask = true;
        }
    }
    if(flasg == false){
        cout<<"letra maiuscula"<<endl;
    }
    if(!flag){
        cout<<"letra minuscula"<<endl;
    }
    if(!flask){
        cout<<"numero"<<endl;
    }
    if(flasg && flake && flask && flag){
        cout<<"senha valida"<<endl; 
    }

    return 0;
}