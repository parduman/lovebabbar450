#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min = prices[0];
        int ans = INT_MIN;
        for(vector<int>::iterator it=prices.begin();it<prices.end();it++){
            cout << min << " " << ans <<endl;
            if(*it < min){
                min = *it;
            }
            if((*it - min) > ans){
                ans = (*it - min);
            }
        }
        return ans;
    }
};

int main() {
    vector <int> v = {7,1,5,3,6,4};
    Solution sol;
    cout << sol.maxProfit(v);
    return 0;
}