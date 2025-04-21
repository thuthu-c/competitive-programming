#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll max (ll x, ll y){ 
    if(y > x) return y;
    else return x; 
}

ll min (ll x, ll y){
    if(x < y ) return x;
    else return y;
}

bool is_even(ll x){
    if(x%2 == 0) return true;
    else return false;
}

int main() {
   ll n, x, y, aux, sq; 

   cin>>n;

   for(auto i{0u}; i < n; ++ i){
        cin>>y>>x; 

        aux = max(x, y);
        sq = (aux - 1) * (aux - 1);

        if(is_even(aux)){
            if(x > y) cout << sq + y << endl;
            else cout << (aux * aux) -x + 1 << endl;
        }else{
         if(x > y) cout <<(aux * aux) -y + 1 << endl;
         else  cout << sq + x << endl;
        }

   }
    return 0;
}