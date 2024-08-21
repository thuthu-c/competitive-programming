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

    vi r(t), l(t);
    int cont = 0, cont2 = 0;
    bool troca = true;

    for(int i=0; i<t; ++i){
        cin >> r[i];
        if(r[r[i]-1] == i+1 && i+1 > r[i] ) {
            troca = !troca;
            if(troca) --cont;
        }  

        if(r[i]-1 != i){
            ++cont;
        }

    }
    troca = true;
    for(int i=0; i<t; ++i){
       cin >> l[i];
       if(l[l[i]-1] == i+1 && i+1 > l[i] ) {
            troca = !troca;
            if(troca) --cont2;
        }  
        
        if(l[i]-1 != i){
            ++cont2;
        }
    }
    if(cont >= 2) cont--;
    if(cont2 >= 2) cont2--;

    cout << cont + cont2 << endl;


    exit(0);
}