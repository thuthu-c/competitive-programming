#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll s, g;
    cin >> s >> g;


    if (g == s) {
        cout << g << " " << g << endl;
        return 0;
    }

    if (g == 1) {
        cout << 1 << " " << s - 1 << endl;
        return 0;
    }

    if (s % g != 0) {
        cout << -1 << endl; 
    } else {
        
        cout << g << " " << s - g << endl;
    }

    return 0;
}
