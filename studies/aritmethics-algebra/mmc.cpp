#include <bits/stdc++.h>
using namespace std;

int mmc (int num, int ber){
    int aux, higher, lower, mmc;

    if(num > ber){
        higher = num;
        lower = ber;
    } else{
        higher = ber; 
        lower = num;
    } 

    for(auto i{2}; i <= higher; ++i){
        aux = lower * i; 
        if((aux %  higher)  == 0  ){
            mmc = aux; 
            i = higher + 1; 
        }
    }

    return mmc; 
}

int main() {
    cout << "Welcome to the mmc's calculator!!! "<< endl;
    cout << "Insert the first number: " << endl;
    int a, b, result; 
    cin >> a;
    cout<< "Insert the second number: " << endl; 
    cin >> b; 
    
    result = mmc(a, b);

    cout << "The mmc of " << a << " and " << b << " is: " << result<< endl;  

    return 0;
}