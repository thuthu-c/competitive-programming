#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main () {
    int n;
    cin >> n;
    cout << n / 3600 << ":" << (n % 3600) / 60 << ":" << n % 60 << endl;
    return 0; 
}
