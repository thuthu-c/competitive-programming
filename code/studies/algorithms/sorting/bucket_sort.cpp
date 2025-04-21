#include <bits/stdc++.h> 
using namespace std;

#define TAM 5

struct Bucket {
    int quantity; 
    int values[TAM];
};
void insertionSort(std::vector<int> &vec) 
{ 
    for (auto it = vec.begin(); it != vec.end(); it++) 
    {         
        // Searching the upper bound, i.e., first  
        // element greater than *it from beginning 
        auto const insertion_point =  
                std::upper_bound(vec.begin(), it, *it); 
          
        // Shifting the unsorted part 
        std::rotate(insertion_point, it, it+1);         
    } 
} 

void bucket_sort(int *v, int n){
    int biggest, lowest, bucketsnumber, position;
   

    biggest = lowest = bucketsnumber = position = 0;

    biggest = lowest = v[0];

    for(auto i{1}; i < n; ++i){
        biggest = v[i] > biggest ? v[i] : biggest;
        lowest = v[i] < lowest ? v[i] : biggest;

    }

    bucketsnumber = (biggest - lowest) / 5 + 1;
    vector<Bucket> bd;

    for(auto j{0}; j < n; ++j){
        position = (v[j] - lowest)/ TAM;
        bd[position].values[bd[position].quantity] = v[j];
        ++bd[position].quantity;
    }

    position = 0;
    for(auto k{0}; k < bucketsnumber; ++k){
        insertionSort(bd[k].values, bd[k].quantity); 

        for(auto l{0}; l < bd[k].quantity; ++k){
            v[position] = bd[k].values[l];
            ++position;
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

    bucket_sort(v, n);

    cout<<"the sorted array:"<<endl;

    for(int i : v){
        cout<<i<<endl;
    }




    return 0;
}