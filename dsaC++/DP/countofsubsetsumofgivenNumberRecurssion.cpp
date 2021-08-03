#include <iostream>
#include <stdio.h>

// Count of subsets sum with a Given sum
// Given an array arr[] of length N and an integer X, the task is to find the number of subsets with sum equal to X.
// Example:

// Input: arr[] = {1, 2, 3, 3}, X = 6
// Output: 3
// All the possible subsets are {1, 2, 3},
// {1, 2, 3} and {3, 3}

using namespace std;
int counter;

int countsubset(int arr[],int sum, int size){
    cout <<sum <<" " <<size <<endl;
    if(sum == 0){
        return 1;
    }
    if(size <= 0){
        return 0;
    }
    return countsubset(arr, sum-arr[size-1], size-1) + countsubset(arr, sum, size-1);
}

int main() {

    int arr[4] = {1, 2, 3, 3};
    int sum = 6;

    cout << countsubset(arr, sum, sizeof(arr)/sizeof(arr[0]));
    return 0;
}