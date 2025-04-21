#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int


int main() {
    string input, aux, a;
    set<string> combinations;

    cin >> input;

    for(auto i{0u}; i < input.size(); ++i){
        for(auto j{i+1}; j < input.size(); ++j){
            aux = input;
            swap(aux[i], aux[j]);
            combinations.insert(aux);
        }
    }

    cout<<combinations.size()<< endl; 

    return 0;
}