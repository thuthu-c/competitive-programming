#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int mmc (int num, int ber){
    int aux, higher, lower, mmc{1};
    if(num == ber) return num;
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

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<mmc(a,mmc(b,c))<<endl;

    return 0;
}