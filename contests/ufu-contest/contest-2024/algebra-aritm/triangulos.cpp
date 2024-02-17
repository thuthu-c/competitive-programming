#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

void teste(double la, double lb, double lc){
    if(pow(la, 2) ==(pow(lb, 2)+pow(lc,2))) cout << "sim\n";
    else cout << "nao\n";
}

int main()
{
    int n;

    cin >> n;

    for(int i=0; i<n; ++i){
        int xa, ya, xb, yb, xc, yc;
        double dab, dbc, dca;

        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        dab = abs(sqrt(pow(xb-xa, 2) + pow(yb-ya, 2)));
        dbc = abs(sqrt(pow(xc-xb, 2) + pow(yc-yb, 2)));
        dca = abs(sqrt(pow(xc-xa, 2) + pow(yc-ya, 2)));

        if(dab >= dbc && dab >= dca) teste(dab, dbc, dca);
        else if(dbc >= dab && dbc >= dca) teste(dbc, dab, dca);
        else teste(dca, dab, dbc);
    }

}
