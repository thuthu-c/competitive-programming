#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    double  d, v, t;
    ll m, h;
    cin>>d>>v;
    t = 19+d/v;

    h = (ll)t%24;
    t -= (ll)t;
    m = (ll)(t*60);

    if(!(h/10)) cout<<'0';
    cout<<h<<':';
    if(!(m/10)) cout<<'0';
    cout<<m<<endl;

    return 0;
}