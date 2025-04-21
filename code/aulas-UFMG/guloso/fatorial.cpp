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

int main() {
    int n; cin >> n;
    
    vi fat(11);
    fat[0] = 1;
    for(int i=01; i<=10; i++) fat[i] = fat[i-1]*i;
    
    int ans = 0;
    for(int i=10; i>0; i--) {
        int at = n/fat[i];
        ans+=at;
        n -= at*fat[i];
    }

    cout << ans << endl;
    
    exit(0);
}