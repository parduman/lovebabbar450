// Coin Change Problem Minimum Numbers of coins
// Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, what is the minimum number of coins to make the change?
// Example:

// Input: coins[] = {25, 10, 5}, V = 30
// Output: Minimum 2 coins required
// We can use one coin of 25 cents and one of 5 cents 

#include <iostream>
#include <stdio.h>
#include <limits.h>

// #include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {25, 10, 5};
    int N = 45;

    int * DP[sizeof(arr)/sizeof(arr[0]) + 1];

    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]) ; i++){
        DP[i] = new int [N+1]{0};
    }

    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0; j<= N; j++){
            if(i==0 && j==0){
                DP[i][j] = INT_MAX - 1;
            } else if(j==0){
                DP[i][j] = 0;
            } else if(i==0) {
                DP[i][j] = INT_MAX - 1;
            } else if(i ==1) {
                if(N%arr[i-1] == 0){
                    DP[i][j] = N/arr[i-1];
                } else {
                    DP[i][j] = INT_MAX - 1;
                }
            } else if(arr[i-1] < j) {
                DP[i][j] = min(1 + DP[i][N - arr[i-1]], DP[i-1][j]);
            } else {
                DP[i][j] =  DP[i-1][j];
            }
        }
    }

     for(int i=0; i <= sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0; j <= N; j++){
            cout <<DP[i][j] <<" ";
        }
        cout <<endl;
    }



    cout <<"Done" <<INT_MAX;



    return 0;
}