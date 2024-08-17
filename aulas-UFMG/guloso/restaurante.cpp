#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

bool cmp(ii a, ii b){
    return a.s <b.s;
}

int main()
{
    int n; cin >> n;
    vector<ii> v(n);
    for(int i=0; i<n; i++) {
        int a, b;cin >> a >> b;
        v.pb({a, b});
    }
    sort(v.begin(), v.end(), cmp);

    int ans = 0;
    int fim = -1;

    for(int i=0; i<n; i++){
        if(v[i].f > fim) {
            fim = v[i].s;
            ans++;
        } 
    }

    cout << ans << endl;

   

    exit(0);
}