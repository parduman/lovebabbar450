#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool subsetSum(vector<int> &arr, int sum, int size){
    if(sum == 0){
        return true;
    }
    if(size <= 0){
        return false;
    }
    if(arr[size-1] <= sum){
        return subsetSum(arr, sum-arr[size-1], size-1) || subsetSum(arr, sum, size-1);
    }
    return subsetSum(arr, sum, size-1);
}

int main() {
    vector <int> arr{2,3,7,8,10};
    int sum = 11;
    cout <<subsetSum(arr,sum,arr.size());
    
    return 0;
}