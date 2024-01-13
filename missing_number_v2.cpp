#include <bits/stdc++.h> 
using namespace std;

int main(){
    unsigned long long int n, result= 0;

    cin>>n;

    vector<unsigned long long int> numbers(n-1); 

    for(int i{0}; i <n-1; i++){
        cin>>numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());

    for(int k{1}; k <= n; k++){
        if(numbers[k-1] != k) { 
            cout<<k; 
            break;
        }
    }

    return 0;
}