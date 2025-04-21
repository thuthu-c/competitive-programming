#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll pd(vector<ll> &numbers, ll indiceatual, ll altura, ll alturamaximaencontrada){

    while(indiceatual < numbers.size()){
        if(numbers[indiceatual] <= numbers[indiceatual-1] ){
            altura++; 
            indiceatual++;
            continue;
        } else{
            if(altura > alturamaximaencontrada){
                alturamaximaencontrada = altura;  
            }
            ++indiceatual;
            altura = 0; 
        }
    
    }

    return alturamaximaencontrada; 
}

int main() {
    ll N; 
    cin>>N; 
    vector<ll> numbers(N+1);
    numbers[N] = -1;

    for(auto i{0u}; i < N; ++i){
        cin>> numbers[i];
    }

    cout<<(N>1 ? pd(numbers, 1, 0, 0) : 0) << endl; 



    return 0;
}