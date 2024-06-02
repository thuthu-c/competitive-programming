#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll A, B; 

    cin >> A >> B; 

    if((B == A+1 && A%3!=0)){ 
        
        cout << "Yes"<< endl;
         
    }else{
        cout << "No"<< endl;
    }

    return 0;
}