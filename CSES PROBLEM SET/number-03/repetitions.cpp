#include <bits/stdc++.h> 
using namespace std; 

int main(){
    string word; 

    cin>>word; 

    char carc = word[0];
    unsigned long long int counter= 0, biggest = 0;

    for(char w: word){
        if(w == carc){
            ++counter;
            if(counter > biggest){
                biggest = counter;
            }
        }else{
            carc = w; 
            counter = 1; 
        }
    }

    cout<<biggest;

    return 0;
}