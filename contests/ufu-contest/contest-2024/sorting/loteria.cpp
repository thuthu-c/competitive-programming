#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int n;
    cin>>n; 
    vector<unsigned long long int> numbers(n); 

    for(auto i{0u}; i < n; ++i){
        cin>>numbers[i];
    }

    sort(numbers.begin(), numbers.end()); 

    cout<<numbers[n-1] - numbers[0]<<endl; 
    

    return 0;
}