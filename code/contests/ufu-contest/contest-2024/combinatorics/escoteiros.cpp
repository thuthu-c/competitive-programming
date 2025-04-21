#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ll n, res = 1;

    cin >> n;

    for (auto i{0u}; i < n; ++i)
    {
        ll aux;
        cin >> aux;
        res *= aux;
    }

    cout << res << endl;
    return 0;
}