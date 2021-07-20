#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector <int> arr){
    int maxi=0;
    for(int i:arr){
        maxi = max(i,maxi);
    }
    vector<int> arr2(maxi+1,0);
    for(int i:arr){
        arr2[i]++;
    }

    for(int i=1;i<arr2.size();i++){
        arr2[i] = arr2[i] + arr2[i-1];
    }

    vector<int> result(arr.size());
    for(int i:arr){
        arr2[i]--;
        result[arr2[i]] = i;
        
    }

    return result;
}

int main() {
    vector<int> arr{1, 4, 1, 2, 7, 5, 2};
    arr = countingSort(arr);
    for(int i:arr){
        cout <<i <<" ";
    }
    return 0;
}