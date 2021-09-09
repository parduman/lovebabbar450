#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <string>
#include <unordered_map>
#include <queue>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {11, 6, 7, 19, 4, 1, 6, 18, 4};
    int len = sizeof(arr)/sizeof(arr[0]);

    int maxProfit = 0;
    int buyDate =0, sellDate = 0;
    for(int i=1;i<len;i++){
        if(arr[i] > arr[i-1]){
            sellDate++;
        } else {
            maxProfit += arr[sellDate] - arr[buyDate];
            buyDate = sellDate = i;
        }
    }
    cout <<maxProfit;
}