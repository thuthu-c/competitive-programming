// #include <bits/stdc++.h> 
// using namespace std; 
// #define ll long long int 


// ll upper_bound_custom(const vector<pair<ll,ll>>& v, ll target) {
//     ll left = 0, right = v.size(); 

//     while (left < right) {
//         ll mid = left + (right - left) / 2;
//         if (v[mid].first <= target) {
//             left = mid + 1;
//         } else {
//             right = mid;
//         }
//     }

//     return left; 
// }

// int main(){

//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n; 
//         cin >> n; 

//         vector<pair<ll, ll>> a(n+1); 

//         for (auto i{1}; i <= n; ++i){
//             ll aux; 
//             cin >> aux;

//             if ( aux < i){
//                 a.push_back({aux, i});
//             }
//         } 
//         sort(a.begin(), a.end());
//         ll cont = 0;

//         for (ll i = 0; i < a.size(); i++) {
//             // Find how many pairs have value > current_index
//             auto pos = upper_bound_custom(a, a[i].first); 
//             cont += a.size() - pos;
//         }
        
//         cout << cont << "\n";

        

//         cout << endl;
//     }
 
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        
        
        vector<pair<ll,ll>> valid;
        for(ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            if(x < i) {
                valid.push_back({x, i});
            }
        }
        

        sort(valid.begin(), valid.end());
        
        ll ans = 0;
        // para cada par válido procura quantos pares tem valor maior que o segundo elemento
        for(ll i = 0; i < valid.size(); i++) {

            //procura a posição do primeiro par que tem valor maisor que valid[i].second
            auto pos = upper_bound(valid.begin(), valid.end(), 
                                 make_pair(valid[i].second, LLONG_MAX)) - valid.begin();
            ans += valid.size() - pos;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}