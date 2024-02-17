#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int type, value; 
    bool flasg = true;

    cin>>type;
    cin>>value;

    if(value == 1){
        cout<<"Às"<< ' '; 
        flasg = false;
    }
    if(value == 11){
        cout<<"Valete"<< ' '; 
        flasg = false;
    }
    if(value == 12){
        cout<<"Dama"<< ' '; 
        flasg = false;
    }
    if(value == 13){
        cout<<"Rei"<< ' '; 
        flasg = false;
    }
    if(flasg){
        cout<<value<<' ';
    }

    if(type == 0){
        cout<<"de Paus"<< endl;

    }
    if(type == 1){
        cout<<"de Ouro"<< endl;

    }
    if(type == 2){
        cout<<"de Coração"<< endl;

    }
    if(type == 3){
        cout<<"de Espada"<< endl;
    }

    return 0;
}