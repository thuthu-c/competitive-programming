#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long int

bool palindrome(ll n){
    string str{to_string(n)};
    string copy{str};
    reverse(copy.begin(), copy.end());
    return copy == str;
}

int main(){
    ll n;
    cin>>n;
    double cube_root{pow(n, 1.0/3.0)};
    cout<<"Raiz cúbica: "<<cube_root<<endl;
    double bla{round(cube_root)};
    cout<<"Truncado: "<<bla<<endl;
    if(cube_root==bla){
        if(palindrome(n)){
            cout<<n<<endl;
            return 0;
        }
    }
    
    
    ll g_cube_root{(ll)pow(n, 1.0/3.0)};
    while(!palindrome((ll)pow(g_cube_root, 3))) --g_cube_root;
    cout<<(ll)pow(g_cube_root, 3)<<endl;


    return 0;
}