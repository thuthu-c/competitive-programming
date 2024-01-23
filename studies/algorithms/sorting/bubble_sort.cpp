#include <bits/stdc++.h> 
using namespace std;

void bubble_sort(int v[], int n){
    bool changed{true}; 

    for(auto i{n-1}; i >= 1 && changed; --i){
        changed = false;
        for(auto j{0}; j < i; ++j ){

            if(v[j] > v[j+1]){

                swap(v[j], v[j+1]);
                changed = true; 

            }
        }
    }

}

int main(){
    int n; 
    cout<<"What's the array's size?"<<endl;
    cin>>n; 

    int v [n];

    cout<<"Insert the elements:"<<endl; 

    for(auto i{0}; i < n; ++i){
        cin>>v[i];
    }

    bubble_sort(v, n);

    cout<<"the sorted array:"<<endl;

    for(int i : v){
        cout<<i<<endl;
    }




    return 0;
}