#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int sp, int ep, int pivot){
    int j=sp;
    for(int i=sp;i<=ep;i++){
        if(arr[i] <= pivot){
            int swap = arr[j];
            arr[j] = arr[i];
            arr[i] = swap;
            j++;
        }
    }
    return j-1;
};

void quicksort(vector<int> &arr,int lo, int hi){
    cout <<lo <<" " <<hi <<endl;
    if(hi <= lo){
        return;
    }
    int pivot = arr[hi];
    int pivotIndex = partition(arr, lo, hi, pivot);
    for(int i=0;i<arr.size();i++){
        cout <<arr[i] <<" ";
    }
    cout <<"pivot " <<pivotIndex <<endl;
    quicksort(arr, lo, pivotIndex - 1);
    quicksort(arr, pivotIndex+1, hi);
}

int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    return 0;
}

// 5
// 7 
// -2 
// 4 
// 1 
// 3