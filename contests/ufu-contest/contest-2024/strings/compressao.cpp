#include <bits/stdc++.h>

using namespace std;


int main(){
    string comp, other; 
    unsigned long long int cont{0};
    char last{0};
    getline(cin, comp);

    for(auto c : comp){
        if(c != last && last!=0){
            other+=last;
            if(cont>2)other+=cont+48;
            cont = 1;
        } else {
            cont += 1;
        }
        last = c;
    }
    other+=last;
    other+=cont+48;
    cout<< (other.size() < comp.size() ? other : comp) << endl;

    return 0;
}