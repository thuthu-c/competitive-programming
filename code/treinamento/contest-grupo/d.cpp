#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main() {
    pair<ll, ll> thuanny;
    pair<ll, ll> esther;
    pair<ll, ll> mariana;
    pair<ll, ll> bia;
    ll a, b; 

    cin>>a>>b;
    thuanny.first = a;
    thuanny.second=b;

     cin>>a>>b;
    esther.first = a;
    esther.second = b; 

     cin>>a>>b;
    mariana.first = a;
    mariana.second = b;

    if(thuanny.first == esther.first){
        bia.first = mariana.first;
    }else if(thuanny.first == mariana.first){
        bia.first = esther.first;
    }else{
        bia.first = thuanny.first;
    }
    if(thuanny.second == esther.second){
        bia.second = mariana.second;
    }else if(thuanny.second == mariana.second){
        bia.second = esther.second;
    }else{
        bia.second = thuanny.second;
    }

    cout<< bia.first <<" "<< bia.second << endl;


    return 0;
}