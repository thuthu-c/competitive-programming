#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    ll A, B, cont = 0; 

    cin >> A >> B;

   cont = A%B; 
    A = A/B;
    
    if(cont == 0){
        cout << A<< endl;
    }else{
        cout << A + 1 << endl;
    }
   

    return 0;
}