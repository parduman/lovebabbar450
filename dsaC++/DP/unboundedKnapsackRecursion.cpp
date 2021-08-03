#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <vector>

using namespace std;

vector <vector<int>> v1;

int unboundedKnapSack(int val[], int wt[], int arrSize, int W){
    if( W == 0 || arrSize <= 0){
        return 0;
    }
    if(v1[arrSize][W] != -1){
        return v1[arrSize][W];
    }
    if(wt[arrSize - 1] <= W){
        return v1[arrSize][W] =  max(val[arrSize - 1] + unboundedKnapSack(val, wt, arrSize, W - wt[arrSize - 1]), unboundedKnapSack(val, wt, arrSize - 1, W));
        
    }
    return v1[arrSize][W] =  unboundedKnapSack(val, wt, arrSize - 1, W);
}

int main() {
    int val[] = {1, 30};
    int wt[] = {1,50};
    int W = 100;

    for(int i=0;i <= sizeof(val)/sizeof(val[0]);i++){
        vector<int> v;
        for(int j=0; j<=W;j++){
            v.push_back(-1);
        }
        v1.push_back(v);
    }
    cout << unboundedKnapSack(val, wt, sizeof(val)/sizeof(val[0]), W);
    return 0;
}