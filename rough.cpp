#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

    int maxSubarraySum(int* arr, int n){
        int maxSum = arr[0];
        int currentSum=0;
        for(int i=0;i<n;i++){
            currentSum += arr[i];
           if(currentSum<0){
                currentSum = 0;
            }
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
        }
     return maxSum;
    }

int main() {
    int a[5] = {1, 2, 3, -2, 5};
    int n = 5;
    cout << maxSubarraySum(a, n);
    return 0;
}