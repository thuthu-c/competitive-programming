#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long unsigned ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main()
{
    int n,p; cin >> n >> p;

    int ans = 0;
    for(int i=0; i<n; ++i){
        int a; cin >> a;
        if(a <=p && a >ans )ans = a;
    }

    cout << ans << endl;

    exit(0);
}