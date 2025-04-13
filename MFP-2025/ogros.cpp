#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int  


ll bb (vector<pair<ll,ll>> v, ll target){
    ll left = 0, right = v.size()-1; 


    while (left < right) {
        ll mid = left + (right - left) / 2;
        if (v[mid].first < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left; 
}

int main (){

ll n, m, aux;

cin >> n >> m; 

vector<ll> faixas(n-1);

for (auto i {0}; i < n-1; ++i) cin >> faixas[i]; 

vector<pair<ll, ll>> faixasremaster(n); 


faixasremaster[0].first = faixas[0]-1; 
faixasremaster[n-1].first = faixas[n-2]; 

for(auto i{1}; i < n-1;++i){

        faixasremaster[i].first = faixas[i]-1; 
}

for(auto j{0}; j < n; ++j) cin >> faixasremaster[j].second; 

for (auto k{0}; k < m; ++k) {
    cin >> aux;

    cout<< faixasremaster[bb(faixasremaster, aux)].second << " ";

}

    return 0; 
}