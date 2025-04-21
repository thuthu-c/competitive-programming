#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n; 
    cin>>n;
    string cripto; 

    for(auto i{0u}; i <= n; ++i){
        cripto = "";
        getline(cin, cripto);
        reverse(cripto.begin(), cripto.begin()+(cripto.size()/2));
        reverse(cripto.begin()+((cripto.size()/2)), cripto.end());
        if(i) cout<<cripto<<endl; 
    }
    
    return 0;
}