// Coin Change Problem Maximum Number of ways
// Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
// Example:
// for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.

#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>

using namespace std;

int main() {
    int coins[] = {1,2,3};
    int N = 4;

    int * DP[sizeof(coins)/sizeof(coins[0]) + 1];
    for(int i=0;i<=sizeof(coins)/sizeof(coins[0]) ; i++){
        DP[i] = new int [N+1]{0};
    }

    for(int i=0; i <= sizeof(coins)/sizeof(coins[0]);i++){
        for(int j=0; j <= N; j++){
            cout <<DP[i][j] <<" ";
        }
        cout <<endl;
    }

    for(int i=0; i <= sizeof(coins)/sizeof(coins[0]);i++){
        for(int j=0; j <= N; j++){
            if(j==0){
                DP[i][j] = 1;
            } else if(i==0){
                DP[i][j] = 0;
            } else {
                if(coins[i-1] <= j){
                    DP[i][j] = DP[i-1][j] + DP[i][j - coins[i-1]]; 
                } else {
                    DP[i][j] = DP[i-1][j];
                }
            }
        }
    }
 for(int i=0; i <= sizeof(coins)/sizeof(coins[0]);i++){
        for(int j=0; j <= N; j++){
            cout <<DP[i][j] <<" ";
        }
        cout <<endl;
    }

    cout <<DP[sizeof(coins)/sizeof(coins[0])][N];
    return 0;
}