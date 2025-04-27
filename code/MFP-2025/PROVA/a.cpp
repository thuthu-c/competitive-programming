#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector<int> a(n + 1);

    for (auto i{1}; i <= n; ++i)
    {
        cin >> a[i];
    }

    vector<int> prefix(m + 2, 0);

    for (auto i{1}; i <= n; ++i)
    {
        int limit = min(a[i], m);
        prefix[1]++;
        prefix[limit + 1]--;
    }

    for (auto k{1}; k <= m; ++k)
    {
        prefix[k] += prefix[k - 1];
        cout << prefix[k] << "\n";
    }
}