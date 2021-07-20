#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
////MAX HEAP

void buildHeap(int arr[], int n, int i){
    int largest = i;
    int l = i*2 +1;
    int r = i*2 +2;
    // cout<<i <<" " <<r <<" " <<l <<endl;
    if(l < n && arr[largest] < arr[l]){
        largest = l;
    }
    if(r < n && arr[largest] < arr[r]){
        largest = r;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        buildHeap(arr, n, largest);
    }
    return;
}

void heapBnade(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        buildHeap(arr, n, i);
    }
}

void printHeap(int arr[], int n){
    cout <<"printing Heap" <<endl;
    for(int i =0;i<n;i++){
        cout <<arr[i] <<" ";
    }
}
int main() {
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapBnade(arr, n);
    printHeap(arr, n);

    return 0;
}