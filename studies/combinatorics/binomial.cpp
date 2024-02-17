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

ll bi(ll n, ll k){

    if(k == 0 || k == n){
        return 1;
    }
    else{
        return bi(n-1, k-1) + bi(n-1, k);
    }
}

ll bi_two (ll n, ll k){
    return rec_fat(n)/(rec_fat(k)*(rec_fat(n-k)));
}

int main() {
    ll n, k, res, ult; 

    cin >> n >> k; 

    res = bi(n, k); 
    ult = bi_two(n,k); 

    cout<< "the binomial coeficent of "<< n << " and " << k << " is: " << endl; 
    cout<<"formula one: " << res << endl; 
    cout<< "formula two: " << ult<< endl; 

    return 0;
}