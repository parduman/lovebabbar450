#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>

using namespace std;

bool equalSumPartition (int arr[], int size, int sum){
    if(sum == 0){
        return true;
    }
    if(size == 0){
        return false;
    }
    if(arr[size-1] <= sum){
        return equalSumPartition(arr, size-1, sum-arr[size-1]) || equalSumPartition(arr, size-1, sum);
    }
    return equalSumPartition(arr, size-1, sum);
}

int main() {
    int arr[5]= {1, 5, 11, 5, 12};
    


    int sum = 0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum += arr[i];
    }
    if(sum%2 != 0){
        cout <<false;
        return 0;
    } else {
        cout <<equalSumPartition(arr, sizeof(arr)/sizeof(arr[0]), sum/2);
    }
    return 0;
}