#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (a * c) / 2 << endl;
    cout << "CIRCULO: " << 3.14159 * c * c << endl;
    cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;
    return 0;
}