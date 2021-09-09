#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <string>
#include <unordered_map>
#include <queue>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,20,30,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int transactionFees = 2;

    int maxProfit = 0;
    int buyDate = 0, sellDate = 0;
    for(int i=1;i<len;i++){
        if(arr[i] > arr[i-1]){
            sellDate++;
        } else {
            if((arr[sellDate] - arr[buyDate] - transactionFees) > 0){
                maxProfit = maxProfit + arr[sellDate] - arr[buyDate] - transactionFees;
            }
            buyDate = sellDate = i;
        }
    }
    cout <<maxProfit;
}