#include <bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int

ll fat(ll n){
    if (n == 0 || n == 1)
        return 1;
    else{
        ll res = n * fat(n - 1);
        return res;
    }
}

ll comb(ll n, ll p){
    ll res = fat(n) / (fat(p) * fat(n - p));
    return res;
}

int main()
{
    ll n, p, res;

    cin >> n >> p;

    while(n != 0 && p != 0)
    {
        res = comb(n, p);
        cout << res << endl;

        cin >> n >> p;
    }

    return 0;
}