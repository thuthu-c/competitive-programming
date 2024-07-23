#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll pd(vector<ll> numeros,ll indice, ll soma, ll max, ll tamanho){

    for(auto i{0}; i <tamanho/2; i += 2){
        soma = numeros[i] + numeros[i+1]; 
        numeros.push_back(soma);
    }
    return maximo; 
}

int main(){
    ll N; 

    cin >> N; 

    vector<ll> numbers(N); 

    for(auto i{0}; i < N; ++i){
        cin >> numbers[i];
    }



    return 0; 
}