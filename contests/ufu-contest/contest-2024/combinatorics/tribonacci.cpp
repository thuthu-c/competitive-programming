#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

vector<__int128> trib(3, 1u);


int main(){
    ll num;
    cin>>num;
    
    for(auto i{3u}; i<num; ++i){
        trib.push_back(trib[i-1] + trib[i-2] + trib[i-3]);
    }
    
    print(trib[num-1]);


    return 0;
}