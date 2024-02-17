#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    int n, soma = 0;

    cin >> n;

    for (auto i{1}; i <= n; ++i)
    {
        soma+=i;
    }

    cout << soma << endl;
    return 0;
}