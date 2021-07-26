#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> v1;

int knapsack01(vector <int> &val, vector <int> &wt, int W, int n){ 
    if(n <= 0 || W <= 0){
        return 0;
    }
    if(v1[n][W] != -1){
        return v1[n][W];
    }
    if(wt[n-1] <= W){
        return v1[n][W] = max(val[n-1] + knapsack01(val, wt, W-wt[n-1], n-1), knapsack01(val, wt, W, n-1));
    }
    return v1[n][W] = knapsack01(val, wt, W, n-1);
}

int main() {
    vector <int> val{60, 100, 120};
    vector <int> wt{10, 20, 30};
    int W = 50;
    for(int i=0;i<=val.size();i++){
        vector<int> v;
        for(int j=0; j<=W;j++){
            v.push_back(-1);
        }
        v1.push_back(v);
    }
    for(int i=0;i<=val.size();i++){
        for(int j=0; j<=W;j++){
            cout << v1[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<knapsack01(val, wt, W, val.size()) <<endl;
    for(int i=0;i<=val.size();i++){
        for(int j=0; j<=W;j++){
            cout << v1[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}