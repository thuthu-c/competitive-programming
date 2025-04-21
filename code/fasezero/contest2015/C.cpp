#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll T, N, lamps;  //Oi, Esther aqui <3
    char aux;

    cin >> T; 
    for(auto i{0}; i < T; ++i ){
        cin >> N;
        lamps = 0;
        vector<bool> light(N+1, false);    
        for(auto j{0}; j < N; ++j){
            cin >> aux; 

            if(aux == '*'){
                light[j] = true;

                if(j-1 >= 0){
                    light[j-1] = true;
                } 
                if(j+1 <N) light[j+1] = true; 
            }

        }


        for (auto j{0}; j < N; ++j)
        {
            if (!light[j])
            {
                lamps++;
                light[j] = true;

                if(!light[j+1]){
                    light[j+1] = true;
                    if(j+2 < N+1) light[j+2] = true;
                }
            }
        }

        cout << lamps << endl; 
    }

    return 0;
} 