#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main(){
    ll n;
    cin>>n;
    set<pair<ll,ll>> coords;
    coords.emplace(0,0);
    pair<ll,ll> curr_coord;
    curr_coord.first = 0;
    curr_coord.second = 0;
    string path;
    cin>>path;
    for(auto i : path){
        switch (i){
            case 'R': ++curr_coord.first; break;
            case 'L': --curr_coord.first; break;
            case 'D': ++curr_coord.second; break;
            case 'U': --curr_coord.second; break;
        }
        if(coords.find(curr_coord) != coords.end()){
            cout<<"Yes"<<endl;
            return 0;
        } else {
            coords.insert(curr_coord);
        }
    }
    cout<<"No"<<endl;

    return 0;
}