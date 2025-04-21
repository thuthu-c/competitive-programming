#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void backtracking(int posicao, char *conjunto, char *conj_bool, int tam_conj){
    int i{0}, j{0};
    
    if(posicao == tam_conj){
        while(i < tam_conj){
            if(conj_bool[i] == 1){
                cout<<conjunto[i]<<',';
            }
                    
            ++i;
        }
            cout << endl;
    }
    else{
        conj_bool[posicao] = 1; 
        backtracking(posicao+1, conjunto, conj_bool, tam_conj);
        conj_bool[posicao] = 0;
        backtracking(posicao+1, conjunto, conj_bool, tam_conj);
    }
}

int main() {
    int tam_conj = 0; // tamanho do conjunto
    char *conj_bool = nullptr; // conjunto de booleanos
    char *conjunto = nullptr; // conjunto
    int i = 0;

    std::cin >> tam_conj;
    std::cin.ignore(); // Ignora o caractere de nova linha '\n'
    
    conj_bool = new char[tam_conj];
    conjunto = new char[tam_conj];

    while (i < tam_conj) {
        std::cin >> conjunto[i];
        i++;
    }

    backtracking(0, conjunto, conj_bool, tam_conj);

    delete[] conj_bool;
    delete[] conjunto;

    return 0;
}