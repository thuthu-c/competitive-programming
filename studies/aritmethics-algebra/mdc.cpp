#include <bits/stdc++.h>
using namespace std;

int mdc(int num, int ber){
    int aux; 

    do{
        aux = num % ber;
        num = ber;
        ber = aux;
    } while (aux != 0);

    return num; 
}

int main() {


    return 0;
}