#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int



int main() {
    string s; 
    ll cont{0};

    cin>>s; 

    for(auto i{1}; i <= 16; i += 2){ 
            if(s[i] == '0'){
                ++cont;
            }
    }

    if(cont == 8){
        cout<< "Yes" << endl; 
    }else{
        cout << "No" << endl;
    }

    return 0;
}