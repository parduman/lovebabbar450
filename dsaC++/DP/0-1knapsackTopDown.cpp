#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

// int knapsack01(vector <int> &val, vector <int> &wt, int W, int n){
//     if(n <= 0 || W <= 0){
//         return 0;
//     }
//     if(v1[n][W] != -1){
//         return v1[n][W];
//     }
//     if(wt[n-1] <= W){
//         return v1[n][W] = max(val[n-1] + knapsack01(val, wt, W-wt[n-1], n-1), knapsack01(val, wt, W, n-1));
//     }
//     return v1[n][W] = knapsack01(val, wt, W, n-1);
// }

int main()
{
    vector<int> val{60, 100, 120};
    vector<int> wt{10, 20, 30};
    int W = 50;

    vector<vector<int>> v1(val.size() + 1, vector<int>(W + 1));

    for (int i = 0; i <= val.size(); i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0) v1[i][j] = 0;
        }
    }
    for (int i = 1; i <= val.size(); i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if(wt[i-1] <= j){
                v1[i][j] = max(val[i-1]+v1[i-1][j-wt[i-1]], v1[i-1][j]);
            } else {
                v1[i][j] = v1[i-1][j];
            }
        }
    }

    cout <<v1[val.size()][W];
    return 0;
}