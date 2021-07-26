#include <iostream>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <vector>

using namespace std;

void merge(vector <int> &arr, int start, int mid, int end){
    cout <<start <<" " <<mid <<" " <<end <<endl;
    int i = start, j = mid+1;
    vector <int> result;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            result.push_back(arr[i]);
            i++;
        } else{
            result.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        result.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        result.push_back(arr[j]);
        j++;
    }
    for(int t=0;t<result.size();t++){
        arr[start] = result[t];
        start++;
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    vector <int> arr{10,9,4,3,6};
    mergeSort(arr, 0, arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout <<arr[i] <<" ";
    }
    return 0;
}