#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long int

int main()
{   
    ll i;
    double v, d, r;

    cin >> v >> i;

    if(i<=5) d = -0.5;
    else if(i<18) d = -0.05;
    else if(i<60) d = 0.1;
    else d = -0.15;

    r = round((v + (d * v))*100)/100.0;

    //cout << r << endl; 
    printf("%.2f", r);

    return 0;
}