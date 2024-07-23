#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll N; 
    cin >> N; 

    string input; 
    cin>>input; 

    for(auto i{0}; i < N; ++i){
        cout<<input[i]<<input[i]; 
    }
    cout << endl; 

    return 0;
}