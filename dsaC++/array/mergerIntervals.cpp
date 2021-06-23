#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for(vector<vector<int>>::iterator it = intervals.begin(); it < intervals.end(); it++){
            if(it == (intervals.end() - 1)){
                result.push_back(*it);
                break;
            }
            if((*it)[1] < (*(it+1))[0]){
                result.push_back(*it);
            } else if((*(it+1))[1] < (*it)[1]){
                (*(it+1))[0] = (*it)[0];
                (*(it+1))[1] = (*it)[1];
            } else {
                (*(it+1))[0] = (*it)[0];
            }
        }
        return result;
    }

int main() {

    vector<vector<int>> v = {{1,3},{1,6},{8,10},{15,18}};
    vector<vector<int>> result = merge(v);
    for(vector<vector<int>>::iterator it = result.begin(); it < result.end(); it++){
        cout << "( " <<(*it)[0] <<", " <<(*it)[1] <<" )" <<" ";
    }
    
    return 0;
}