#include <bits/stdc++.h> 
using namespace std;

vector<bool> mark;
vector<unsigned long long int> laravel; 

bool in_stack(unsigned long long int w, stack<unsigned long long int> Q){
    while (!Q.empty()){
        if(Q.top() == w){
            return true;
        } else Q.pop();
    } 
    return false; 
}

bool are_consecutives(unsigned long long int v, unsigned long long int w, stack<unsigned long long int> Q){
    while(!Q.empty()){
        if(Q.top() == v ||Q.top() == w){
            Q.pop(); 
            if(Q.top() == v || Q.top() == w){
                return true;
            }
        }
        Q.pop();
    }
    
    return false; 
}

void P(vector<vector<unsigned long long int>> L,unsigned long long int v ){
    mark[v] = 1; 
    laravel.push_back(v); 
    stack<unsigned long long int> Q;
    Q.push(v); 

    for(unsigned long long int w : L[v]){
        if(!mark[w]){
         P(L, w); 
        }
        //else{
        //     if(in_stack(w, Q)&& are_consecutives(v, w, Q)){
        //         visitar(v,w)
        //     }
        // }
    }

    Q.pop(); 
}

int main(){
    unsigned long long int n; 
    cin>>n;
    // cout<<n; 
    mark.reserve(n);
    // cout<<mark.capacity();
    vector<vector<unsigned long long int>> L(n);

   

    for(unsigned long long int i{0}; i < n; ++i){
        for(unsigned long long int j{0}; j < n; ++j){
            if(j == (i+1) || j == (i-1)){
                continue;
            }
            else{
                L[i].push_back(j);
            }
        }
    }

     P(L, (n/2)); 

    bool flasg = true; 
    
    for(unsigned long long int m{0}; m < n; ++m){
        if(!mark[m]){
            flasg = false;
            break;
        }
    }


    if(flasg){
        for(unsigned long long int l : laravel){
            cout<<l+1<<" ";
        }
    } else{
        cout << "NO SOLUTION"; 
    }

    return 0;
}