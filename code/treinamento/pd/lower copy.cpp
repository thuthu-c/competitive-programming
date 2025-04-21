#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll pd(vector<ll> &numbers, ll indiceatual, ll altura, ll alturamaximaencontrada){

    if(numbers[indiceatual] <= numbers[indiceatual-1] ){
        altura++; 
        return pd(numbers, indiceatual+1, altura, alturamaximaencontrada);
    }else{
        if(altura > alturamaximaencontrada){
            alturamaximaencontrada = altura;  
        }
        
        if(indiceatual < numbers.size()-1){

            return pd(numbers, indiceatual+1, 0, alturamaximaencontrada);
        }
        

        return alturamaximaencontrada;
    }
}

int main() {
    ll N; 
    cin>>N; 
    vector<ll> numbers(N);

    for(auto i{0u}; i < N; ++i){
        cin>> numbers[i];
    }

    cout<<(N>1 ? pd(numbers, 1, 0, 0) : 0) << endl; 



    return 0;
}