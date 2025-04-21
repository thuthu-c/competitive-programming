#include <bits/stdc++.h>

using namespace std;

int main(){
    string prin, cipal; 
    getline(cin,prin); 
    getline(cin,cipal); 
    
    for(auto &i : prin){
        i = tolower(i);
    }
    for(auto &i : cipal){
        i = tolower(i);
    }

    sort(prin.begin(), prin.end());
    sort(cipal.begin(), cipal.end());

    if(prin == cipal){
        cout<<"sim"<<endl;
    }
    else{
        cout<<"nao"<<endl; 
    }

    return 0;
}