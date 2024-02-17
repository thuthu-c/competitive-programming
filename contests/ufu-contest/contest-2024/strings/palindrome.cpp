#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    string copy{str};

    reverse(str.begin(), str.end());

    if(copy == str) cout<<"sim"<<endl;
    else cout<<"não"<<endl;

    

    return 0;
}