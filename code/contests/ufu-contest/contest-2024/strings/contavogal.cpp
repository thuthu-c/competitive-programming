#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int cont{0};
    string str;
    getline(cin, str);
    for(auto i : str){
        switch (tolower(i))
        {
        case 'a':;
        case 'e':;
        case 'i':;
        case 'o':;
        case 'u': ++cont; break;
        default:
            break;
        }
    }

    cout<<cont<<endl;

    return 0; 
}