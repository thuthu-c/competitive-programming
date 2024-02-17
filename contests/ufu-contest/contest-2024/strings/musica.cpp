#include <bits/stdc++.h>

using namespace std;


int main(){
    unsigned long long int n;
    cin>>n;
    string out{""};

    for(auto i{0}; i<n; ++i){
        string t;
        cin>>t;
        out+=t;
        if(i<n-1)out+=" ";
    }
    cout<<out<<endl;



    return 0;
}