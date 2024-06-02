#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main() {

    
    __int128 X; 

    cin>> X;

    result = X/10.0;

    cout << floor(result)+1<< endl; 

    return 0;
}