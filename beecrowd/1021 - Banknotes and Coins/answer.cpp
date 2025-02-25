#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    double n;
    cin >> n;
    cout << "NOTAS:\n";
    cout << (int)n/100 << " nota(s) de R$ 100.00\n";
    n -= (int)n/100 * 100;
    cout << (int)n/50 << " nota(s) de R$ 50.00\n";
    n -= (int)n/50 * 50;
    cout << (int)n/20 << " nota(s) de R$ 20.00\n";
    n -= (int)n/20 * 20;
    cout << (int)n/10 << " nota(s) de R$ 10.00\n";
    n -= (int)n/10 * 10;
    cout << (int)n/5 << " nota(s) de R$ 5.00\n";
    n -= (int)n/5 * 5;
    cout << (int)n/2 << " nota(s) de R$ 2.00\n";
    n -= (int)n/2 * 2;
    cout << "MOEDAS:\n";
    cout << (int)n << " moeda(s) de R$ 1.00\n";
    n -= (int)n;
    cout << (int)(n/0.5) << " moeda(s) de R$ 0.50\n";
    n -= (int)(n/0.5) * 0.5;
    cout << (int)(n/0.25) << " moeda(s) de R$ 0.25\n";
    n -= (int)(n/0.25) * 0.25;
    cout << (int)(n/0.1) << " moeda(s) de R$ 0.10\n";
    n -= (int)(n/0.1) * 0.1;
    cout << (int)(n/0.05) << " moeda(s) de R$ 0.05\n";
    n -= (int)(n/0.05) * 0.05;
    cout << (int)(n/0.01) << " moeda(s) de R$ 0.01\n";

    return 0;
}