#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <vector>

using namespace std;

int subsetSumDifference(vector<int> &arr, int sum1,int sum2, int size, int differenceRequired){
    if(size <= 0){
        if(sum1-sum2 == differenceRequired){
            return 1;
        } else {
            return 0;
        }
    }
    return subsetSumDifference(arr, sum1 + arr[size-1], sum2, size-1, differenceRequired) + subsetSumDifference(arr, sum1 , sum2 + arr[size-1], size-1, differenceRequired);
}

int main() {
    vector <int> arr{1,1,2,3};
    int givenDifference = 1;

    cout <<subsetSumDifference(arr,0,0,arr.size(), givenDifference);
    
    return 0;
}