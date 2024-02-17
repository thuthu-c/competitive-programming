#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll rec_fat(ll number){

    if(number==0 || number == 1){
        return 1;
    }
    else{
        return number*rec_fat(number-1);
    } 
}

ll arr(ll num, ll ber){
    return rec_fat(num)/(rec_fat(num-ber));
}

ll perm(ll num){
    return arr(num, num); 
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll result{perm(a,b)};
    cout<<result;

    return 0;
}