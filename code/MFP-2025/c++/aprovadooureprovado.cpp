#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

int main (){
    double n1, n2;
    cin >> n1 >> n2;

    double media = (n1 + n2) / 2;

    cout <<  (media >= 7 ? "Aprovado" : (media >= 4 ? "Recuperacao" : "Reprovado"))  << endl;

    return 0; 
}