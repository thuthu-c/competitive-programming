#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k1, k2, k3; 

    cin >> t; 

    while(t--){
        cin >> k1 >> k2 >> k3; 

        if (k1 != k2 && k1 != k3) cout << k1 << "\n"; 
        else if (k2 != k3 && k2 != k1 ) cout << k2 << "\n";
        else cout << k3 << "\n"; 

         
    }
}