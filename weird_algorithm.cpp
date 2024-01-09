#include <bits/stdc++.h> 
using namespace std;

bool is_even(unsigned long long int n){

    if(n%2 != 0){
        return false;
    }else return true; 
}


int main(){
    unsigned long long int n;

    cin>>n; 
    cout<<n<<" ";

    while(n != 1){
       

        if(is_even(n)){
            n = n/2; 
            if(n == 1){
            cout<<n;
            break;
            }
            cout<<n<<" "; 
        }else{
            
            n= (n*3)+1; 
            if(n == 1){
            cout<<n;
            break;
            }
            cout<<n<<" "; 
        } 
    }

   return 0; 
}