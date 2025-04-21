#include <bits/stdc++.h>
using namespace std;
#define ll long long int

using namespace std;

bool is_valid(const vector<vector<int>>& grid) {
   
    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] == grid[i][1] && grid[i][1] != grid[i][2]) return false;
        if (grid[i][1] == grid[i][2] && grid[i][0] != grid[i][1]) return false;
    }

    // Verificar cada coluna
    for (int j = 0; j < 3; ++j) {
        if (grid[0][j] == grid[1][j] && grid[1][j] != grid[2][j]) return false;
        if (grid[1][j] == grid[2][j] && grid[0][j] != grid[1][j]) return false;
    }

    // Verificar diagonal principal
    if (grid[0][0] == grid[1][1] && grid[1][1] != grid[2][2]) return false;
    if (grid[1][1] == grid[2][2] && grid[0][0] != grid[1][1]) return false;

    // Verificar diagonal secundaria
    if (grid[0][2] == grid[1][1] && grid[1][1] != grid[2][0]) return false;
    if (grid[1][1] == grid[2][0] && grid[0][2] != grid[1][1]) return false;

    return true;
}

int main() {
    vector<vector<int>> grid(3, vector<int>(3));

    // Ler os numeros do grid
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> grid[i][j];
        }
    }

   ll valid_configurations = 0;
   
    do {
        if (is_valid(grid)) {
            valid_configurations++;
        }
    } while (next_permutation(grid.begin(), grid.end()));


    ll total_configurations = 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9;


    double probability = (double)valid_configurations / total_configurations;

    cout << fixed << probability << endl;

    return 0;
}
