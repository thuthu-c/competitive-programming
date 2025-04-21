#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    stack<ll> s;
    
    ll input{1}; 

    while(input){
        cin>>input;

        s.push(input);
    }

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}