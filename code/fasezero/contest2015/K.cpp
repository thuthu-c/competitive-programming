#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    
    ll T, N, K, aux; 
    bool flasg{false};

    cin >> T; 

    for(auto i{0u}; i < T; ++i){
        flasg = false;
        cin>>N>>K;
        multiset<ll> numbers;
        for(auto j{0u}; j < N; ++j){
            cin>> aux;
            if(aux && (K%aux) == 0) numbers.insert(aux); 
        }
        long int cont{0};
        for(auto n : numbers){
            if(numbers.find(K/n) != numbers.end() && distance(numbers.begin(), numbers.find(K/n)) != cont){
                flasg = true;
                cout<<n<<' '<<K/n<<endl;
                break;
            }
            ++cont;
        }
        if(!flasg) cout<<-1<<endl;
        
    }

    return 0;
}