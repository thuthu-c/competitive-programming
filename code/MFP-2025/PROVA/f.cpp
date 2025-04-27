// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, p, k;

//     cin >> n >> p >>k; 

//     vector<vector<int>> grafo (n+1);

//     for(int i = 1; i <= n; i++) {
//         if(i == p) continue;
//         else if(i!=1 && i != n){
//             grafo[i].push_back(i-1);
//             grafo[i].push_back(i+1);
//         }else if (i ==1){
//             grafo[i].push_back(2);
//             grafo[i].push_back(n);
//         } else{
//             grafo[i].push_back(n-1);
//             grafo[i].push_back(1); 
//         } 
//     }

//     if(p != 1 && p!= n){
//         vector<int> aux(2);
//         aux = grafo[p-1];
//         grafo[p-1].clear();
//         grafo[p-1].push_back(aux[0]);
//         grafo[p-1].push_back(aux[1]+1);

//         aux.clear();
//         aux = grafo[p+1];
//         grafo[p+1].clear();
//         grafo[p+1].push_back(aux[0]+1);
//         grafo[p+1].push_back(aux[1]); 
//     }

//     cout << grafo[k%(n-1)][1] << endl; 


// }   

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, k;
    cin >> n >> p >> k;

    int pato = p;  
    
    for(auto i{0}; i < k+1; ++i) {
        pato++;  
        if(pato > n) pato = 1;  
        if(pato == p) {  
            ++pato;      
            if(pato > n) pato = 1; 
        }
    }

    int ganso = pato;

    cout << ganso << "\n";
    return 0;
}