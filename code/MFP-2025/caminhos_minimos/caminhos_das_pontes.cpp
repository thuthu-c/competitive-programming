#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = 1e18; 

//calculates value of shortest path from a to b;
int min_path(int a,int b, vector<vector<pair<int,int>>>& grafo, int n) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
    vector<int>dp(n,INF);
    dp[a]=0;
    heap.push({0,a});
    while(!heap.empty()){
        auto olhando=heap.top();
        heap.pop();
        if (olhando.second==b)break;
        if (olhando.second!=a && dp[olhando.second]<olhando.first) continue;
        for (auto k:grafo[olhando.second]){
            if (dp[k.first]>dp[olhando.second]+k.second){
                dp[k.first]=dp[olhando.second]+k.second;
                heap.push({dp[k.first],k.first});
            }
        }
    }
    return dp[b];
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m; 

    vector<vector<pair<int,int>>> grafo (n+2);
    for(int i = 0; i < m; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        grafo[s].push_back({t, b});
        grafo[t].push_back({s, b});
    }



    cout<<min_path(0,n+1, grafo,n+2)<<endl; 
}