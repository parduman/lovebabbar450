#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int knapsack01(vector <int> &val, vector <int> &wt, int W, int n){
    if(n <= 0 || W <= 0){
        return 0;
    }
    if(wt[n-1] <= W){
        return max(val[n-1] + knapsack01(val, wt, W-wt[n-1], n-1), knapsack01(val, wt, W, n-1));
    }
    return knapsack01(val, wt, W, n-1);
}

int main() {
    vector <int> val{60, 100, 120};
    vector <int> wt{10, 20, 30};
    int W = 50;

    cout <<knapsack01(val, wt, W, val.size());

    return 0;
}