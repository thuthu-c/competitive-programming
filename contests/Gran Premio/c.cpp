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
    int t; cin >> t;

    for(int i=0; i<t; ++i){
        int a, n; cin >> a >>n;
        int ans = 0;
        // if(a <=p && a >ans )ans = a;

        for(auto j{1}; j<=a;++j){
            if(j >= n && n!=1) break;
            if((n-1)%j == 0) ++ans;
        }
        cout << ans << endl;
    }


    exit(0);
}