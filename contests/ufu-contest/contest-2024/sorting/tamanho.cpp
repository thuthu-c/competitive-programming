#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<string>& v, int n){
    bool changed{true}; 

    for(auto i{n-1}; i >= 1 && changed; --i){
        changed = false;
        for(auto j{0}; j < i; ++j ){

            if(v[j].size() > v[j+1].size()){

                swap(v[j], v[j+1]);
                changed = true; 

            }
        }
    }
}

int main() {
    unsigned long long int n; 
    cin>>n;
    vector<string> inputs(n); 
    // vector<unsigned long long int> sizes(n); 
    // vector<string> finals (n); 

    for(auto i{0u}; i < n; ++i){

        cin>>inputs[i];
        
    }
    bubble_sort(inputs, inputs.size());

    // sort(sizes.begin(), sizes.end());
    //[](unsigned long long int a, unsigned long long int b){
    //     if(a > b){ return false;
    //     if(a.size() == b.size()){
    //         if(a > b) return true;
    //     }}

    // for(auto j{0u}; j < n;++j){
    //     for(auto k{0u}; k < n; ++k){
    //         if(sizes[j] == inputs[k].size()){
    //             finals[j] = inputs[k]; 
    //             break;
    //         }
    //     }
    // }
    unsigned long long int sz{0}, idx_sz{0};

    for(auto i{0u}; i<n; ++i){
        // cout<<"Found "<<inputs[i]<<endl;    
        if(sz<inputs[i].size()){
            // cout<<"Sorting..."<<endl;
            sort(inputs.begin()+idx_sz, inputs.begin()+i);
            sz = inputs[i].size();
            idx_sz = i;
        }
    }
    sort(inputs.begin()+idx_sz, inputs.end());

    // sort(inputs.begin(), inputs.end(), [](string a, string b){
    //     if(a.size() > b.size() ) return false;
    //     if(a.size() == b.size()){
    //         if(a > b) return true;
    //     }
    //     return false;
    //     });


    
    
    for(auto c : inputs){
        cout<<c<<endl;
    }
    return 0;
}