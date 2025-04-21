#include <bits/stdc++.h> 
using namespace std;

int main(){
    unsigned long long int n,helper = 0, result= 0;

    cin>>n;

    vector<unsigned long long int> numbers(n-1); 

    for(unsigned long long int i{0}; i < n-1; ++i){
        cin>>helper;
        numbers[i] = helper;
    }

    sort(numbers.begin(), numbers.end()); 
    if (n == 2) {
        result = (numbers[0] == 1) ? 2 : 1;
    } else {

            for(unsigned long long int j{0}; j < n-1; ++j){
                if(numbers[j] != j+1){
                    result = j+1; 
                    break;
                }
            }

            if(result == 0){
                result = n; 
            }
    }

    cout<<result; 

    



    return 0;
}