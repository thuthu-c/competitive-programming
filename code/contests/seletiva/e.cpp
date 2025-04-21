// Este codigo resolve um problema de amizades/relacionamentos em um grafo. Vou explicar:

// ### O Problema
// - Dado um grupo de `n` pessoas
// - Para cada par de pessoas (i,j) temos um valor `f` que representa o nivel de amizade
// - Os dados sao fornecidos em formato triangular (matriz triangular inferior)
// - Precisamos calcular a soma total das amizades e o valor maximo para cada pessoa

// ### Como Funciona
// 1. **Input:**
//    ```
//    3        # n pessoas
//    1        # f(1,0)
//    2 3      # f(2,0) f(2,1)
//    ```

// 2. **Processamento:**
//    - Mantem um vetor `friendships` para somar as amizades de cada pessoa
//    - Para cada linha i, soma os valores f tanto para a pessoa i quanto para seus amigos j
//    - Calcula o maximo valor de amizade entre todas as pessoas

// 3. **Output:**
//    - Primeira linha: soma total de todas as amizades
//    - Proximas n-1 linhas: valor maximo de amizade encontrado

// ### Exemplo
// ```
// Input:
// 3
// 1
// 2 3

// Output:
// 12    # soma total (1 + 2 + 3) * 2 = 12
// 3     # maximo valor para pessoa 1
// 3     # maximo valor para pessoa 2
// ```

// ### Complexidade
// - Tempo: O(n^2) para ler a matriz triangular
// - Espaco: O(n) para armazenar o vetor de amizades

// O codigo tem um pequeno problema: esta imprimindo o mesmo valor maximo para todas as pessoas, quando deveria calcular o maximo individual para cada uma.

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    
    vector<int> friendships(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j <= i; ++j) {
            int f;
            cin >> f;
            friendships[j] += f;
            friendships[i + 1] += f; // Corrigindo para somar em ambos os lados da amizade
        }
    }

    int max_friendship = *max_element(friendships.begin(), friendships.end());

    cout << accumulate(friendships.begin(), friendships.end(), 0) << endl;
    for (int i = 0; i < n - 1; ++i) {
        cout << max_friendship << endl;
    }

    return 0;
}
