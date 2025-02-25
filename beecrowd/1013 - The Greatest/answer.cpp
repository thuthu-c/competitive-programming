#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
   ll a, b, c;

    cin >> a >> b >> c; 
    ll maior = (a + b + labs(a - b)) / 2;
    maior = (maior + c + labs(maior - c)) / 2;
    cout << maior << " eh o maior" << endl; 
    return 0;
}