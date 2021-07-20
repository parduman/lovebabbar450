#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    int windowSize = 0;
    int max = INT_MIN;
    int resultArray[sizeof(arr)/sizeof(arr[0])];
    int j = 0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(windowSize < k){
            if(arr[i] > max){
                max = arr[i];
            }
            windowSize++;
        } else if( windowSize == k){
            if(arr[i] > max){
                max = arr[i];
            }
            windowSize++;
            resultArray[j] = max;
            j++; 
        } else {
            
        }
    }
    return 0;
}