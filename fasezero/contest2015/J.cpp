#include <bits/stdc++.h>
#define ll unsigned long long int 

using namespace std;

int main(){
    int T, N, M, gCandy{0}, gAges{0}; 

    cin >> T; 

    for(auto i{0}; i < T; ++i){
        ll amntAges{0}, amntCandies{0};
        vector<ll> ages(16, 0);
        vector<ll> candies(51, 0);

        cin >> N >> M; 

        for(auto j{0}; j < N; ++j){
            ll help;
            cin >> help; 
            if(help > gAges) gAges = help;
            if(!ages[help]) ++amntAges;
            ++ages[help];
        }
        for(auto k{0}; k < M; ++k){
            ll aux;
            cin >> aux;
            if(aux > gCandy) gCandy = aux;
            if(!candies[aux]) ++amntCandies;
            ++candies[aux];
        }

        if(amntCandies < amntAges){
            cout<<"NO"<<endl;
            continue;
        }

        int  idxCandy = 0;
        
        bool flasg{false};

        for(auto i{5}; i <=gAges; ++i){
            if(ages[i]){
                if(ages[i] <= gAges) flasg = false;
                for(auto j{idxCandy}; j<=gCandy; ++j){
                    if(!candies[j]) continue;
                    if(candies[j] >= ages[i]){
                        idxCandy = j+1;
                        flasg = true;
                        break;
                    }
                }
                if(!flasg){
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }

        if(flasg) cout<<"YES"<<endl;
    }
}