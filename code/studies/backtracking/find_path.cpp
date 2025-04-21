#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

const int DIM = 4; 
const int larguraCampo = 4;

void print (int sol[DIM][DIM]){
   for (auto i{0}; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            cout << setw(larguraCampo) << sol[i][j];
        }
        cout << endl;
    }
}

bool findPath(int x, int y, int matrix[DIM][DIM], int sol[DIM][DIM]){
    if(x<0 || x > DIM-1) return false; // outline

    if(y < 0 || y > DIM-1) return false; // outline

    if(matrix[x][y] == 0) return false; // obstacle

    if( x == DIM-1 && y == DIM-1){ // found the exit
        sol[x][y] = 1; 
        return true;
    }

    sol[x][y] = 1; // possible solution

    if(findPath(x+1, y, matrix, sol)) return true; // straight ahead
    if(findPath(x, y+1, matrix, sol)) return true; // turn down

    sol[x][y] = 0; //backtracking

    return false; 
}


bool begin(int matrix[DIM][DIM]){
    int sol[DIM][DIM] = {0};

    if(!findPath(0, 0, matrix, sol)) return false;
    
    print(sol);
    
    return true;

    
}





int main() {

    int matriz[DIM][DIM];

    matriz[0][0] = 1; 
    matriz[0][1] = 0;
    matriz[0][2] = 0; 
    matriz[0][3] = 0;
    matriz[1][0] = 1; 
    matriz[1][1] = 1; 
    matriz[1][2] = 1; 
    matriz[1][3] = 1; 
    matriz[2][0] = 0; 
    matriz[2][1] = 1; 
    matriz[2][2] = 0; 
    matriz[2][3] = 0; 
    matriz[3][0] = 1; 
    matriz[3][1] = 1; 
    matriz[3][2] = 1; 
    matriz[3][3] = 1;

    print(matriz); 

    cout << "let's find the path" << endl; 

    begin(matriz);


    return 0;
}