#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main() {
    ll n, c, result;
    cin>>n; 

    vector<ll>p(n);

    for(auto i{0u}; i < n; ++i){
        cin >> c;
        p[i] = c;
    }

    sort(p.begin()+1, p.end());

    if(p[0] > *(p.end()-1)){
        cout<<"0"<<endl;
    }
     else if(p[0] == *(p.end()-1) && n !=1){
        cout<<"1"<<endl;
    }else if(*(p.begin()) != *(p.end()-1)){
        result = *(p.end()-1)+1 - *p.begin();
        cout << result << endl;
    }
    else{
        cout << "0"<<endl; 
    }


    return 0;
}