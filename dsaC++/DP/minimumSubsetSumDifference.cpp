#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <vector>

using namespace std;


int subsetSumDifference(vector<int> &arr, int sum1,int sum2, int size){
    if(size <= 0){
        return abs(sum1-sum2);
    }
    return min(subsetSumDifference(arr, sum1 + arr[size-1], sum2, size-1), subsetSumDifference(arr, sum1 , sum2 + arr[size-1], size-1));
}

int main() {
    vector <int> arr{10,20,10};

    cout <<subsetSumDifference(arr,0,0,arr.size());
    
    return 0;
}