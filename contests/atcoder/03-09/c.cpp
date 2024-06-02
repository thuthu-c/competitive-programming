#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

vector<ll> A, B, C; 

// A utility function that returns 
// maximum of two integers 
ll max(int a, int b) { return (a > b) ? a : b; } 

// Returns the maximum value that 
// can be put in a knapsack of capacity W 
ll knapSack(ll W, vector<ll> wt, vector<ll> val, ll n, short g) 
{ 

    // Base Case 
    if (n == 0 || W == 0) 
        return 0; 

    // If weight of the nth item is more 
    // than Knapsack capacity W, then 
    // this item cannot be included 
    // in the optimal solution 
    if (wt[n - 1] > W) {
        switch(g){
            case 0: return knapSack(W, B, B, n - 1, ++g); 
            case 1: return knapSack(W, C, C, n - 1, ++g); 
            case 2: return knapSack(W, A, A, n - 1, 0); 
        }
    }

    // Return the maximum of two cases: 
    // (1) nth item included 
    // (2) not included 
    else{
        return max(g == 0 ? (val[n - 1] + knapSack(W - wt[n - 1], B, B, n - 1, ++g)) : (g == 1 ? (val[n - 1] + knapSack(W - wt[n - 1], C, C, n - 1, ++g)) : (val[n - 1] + knapSack(W - wt[n - 1], A, A, n - 1, 0))), 
                   g == 0 ? knapSack(W, B, B, n - 1, ++g) : (g == 1 ? knapSack(W, C, C, n - 1, ++g) : knapSack(W, A, A, n - 1, 0))); 
    }
} 

short min(ll a, ll b, ll c){
    ll min = c; 
    short min_i{2};

    if (a < min){
        min = a;
        min_i = 0;
    }
    if(b < min){
        min = b;
        min_i = 1;
    }
    
    return min_i; 
}

int main() {
    ll n, m, l, q, a; 
    

    cin >>n;

    for(auto i{0u}; i < n; ++i){
        cin>>a;
        A.push_back(a);
    }
    
    sort(A.begin(), A.end());

    cin>> m; 

    for(auto i{0u}; i < m; ++i){
        cin>>a;
        B.push_back(a);
    }

    sort(B.begin(), B.end());

    cin>>l; 
    for(auto i{0u}; i < l; ++i){
        cin>>a;
        C.push_back(a);
    }
    
    sort(C.begin(), C.end());

   
    cin >> q;
    
    for(auto i{0u}; i<q; ++i){

        ll xi;
        cin >> xi;
        auto ret{knapSack(xi, A, A, A.size(), 0)};
        cout<<(xi == ret ? "Yes" :"No")<<endl;
    }
    

    return 0;
}