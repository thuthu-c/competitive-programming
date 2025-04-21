#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll aux;
    vector<bool> songs(4, false);

    for(auto i{0u}; i<3; ++i){
        cin >> aux;
        songs[aux] = true;
    }

    for(auto i{1u}; i<4; ++i){
        if(!songs[i]){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
        cin >> aux;
        songs[aux] = true;
    }

    for(auto i{1u}; i<4; ++i){
        if(!songs[i]){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
