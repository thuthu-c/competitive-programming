#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

int main (){

    ll n; 
    cin >> n;

    string s; 
    char c;

    cin >> c;
    getline(cin, s);

    for(auto i{0}; i < n; ++i){
        s[i] = tolower(s[i]);
    }


    set<char> st;
    st.insert(tolower(c));

    st.insert(s.begin(), s.end());


    if(st.size() == 26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    

    return 0; 
}