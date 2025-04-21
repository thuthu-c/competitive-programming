#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    string S;
    cin >> S; 

    for(auto i{0u}; i < S.size(); ++i){
        if(S[i]>=65 && S[i] <= 90){
            cout << i+1<< endl;
            break;
        }
    }

    return 0;
}