#include <bits/stdc++.h>

using namespace std;

//binary search basic function with pointers
template <typename T>
T* bsearch(T* left, T* right, T value){
    while (left != right){
        auto mid{left+((right-left)/2)};
        if(*mid == value) return mid;
        else if (*mid < value) left = mid + 1;
        else right = mid;
    }
    return nullptr;
}

//binary search basic function no pointers
template <typename T>
int bsearch_noptr(vector<T> list, T value){
    auto left_idx{0}, right_idx{list.size()};
    while (left_idx != right_idx){                       //checking if sublist is empty
        auto mid{(right_idx/2)};                         //middle of current sublist
        if(list[mid] == value) return mid;               //if found
        else if (list[mid] < value) left_idx = mid + 1;  //if not in the first half, change left idx
        else right_idx = mid;                            //if not in the second half, change right idx
    }
    return -1;                                           //not on the list
}

//lower bound
template <typename T>
T* lower_bound(T* left, T* right, T value){
    auto mid{right+((right-left)/2)};
    auto curr_ans{right};
    while (left != right){
        mid = right+((right-left)/2);
        if (*mid < value) left = mid + 1;
        else {
            if(*curr_ans >= *mid) curr_ans = mid;
            right = mid;
        }
    }
    return curr_ans;
}

//upper bound
template <typename T>
T* upper_bound(T* left, T* right, T value){
    auto mid{right+((right-left)/2)};
    auto curr_ans{right};
    while (left != right){
        mid = right+((right-left)/2);
        if (*mid <= value) left = mid + 1;
        else {
            if(*curr_ans >= *mid) curr_ans = mid;
            right = mid;
        }
    }
    return curr_ans;
}
