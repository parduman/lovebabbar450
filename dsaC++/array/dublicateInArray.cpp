#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
        for(vector<int>::iterator it = nums.begin(); it != nums.end();it++){
            if (nums[abs(*it)] > 0){
                nums[abs(*it)] = (-1)*nums[abs(*it)];
            } else {
                return abs(*it);
            }
        }
        return -1;
    }

int main() {
    vector < int > v = {1,3,4,2,2};
    cout << findDuplicate(v);
    return 0;
}