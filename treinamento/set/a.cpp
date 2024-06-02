#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {

    set<char> str; 
    string input;

    cin>>input;
    
    for(auto i : input){
        str.insert(i);
    }

    auto runner = str.begin();

    for(auto i{0}; i < 9; ++i, ++runner){

        if(*(runner) - 48 != i){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}