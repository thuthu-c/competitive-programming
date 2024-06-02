#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll N; 
    cin >> N; 
    if( N == 0 ){ cout << "E" << endl;  return 0;}
    if( N >= 1 && N <= 35 ) {cout << "D" << endl;return 0;}
    if( N >= 36 && N <= 60 ) {cout << "C" << endl; return 0;}
    if( N >= 61 && N <= 85 )  {cout << "B" << endl; return 0;}
    if( N >= 86 && N <= 100 )  {cout << "A" << endl;   return 0;}

    return 0;
}