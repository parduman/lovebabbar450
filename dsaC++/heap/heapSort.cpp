#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void Heapify(int arr[], int n, int i){
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
        Heapify(arr, n, largest);
    }
    return;
}

void heapSort(int arr[], int n){
    for(int i =n/2 -1; i>=0;i--){
        Heapify(arr, n, i);
    }

    for(int i=n-1;i > 0; i--){
        swap(arr[0], arr[i]);

        Heapify(arr, i, 0);
    }
}

void printHeap(int arr[], int n){
    cout <<"printing Heap" <<endl;
    for(int i =0;i<n;i++){
        cout <<arr[i] <<" ";
    }
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    printHeap(arr, n);
    return 0;
}