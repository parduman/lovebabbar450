#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,-2,-3,4,-6,7,8,9}, windowSize = 3;

    // solution

    int i=0,j=0;
    int negatives[sizeof(arr)/sizeof(arr[0])] = {0};
    int negativestart =0, negativeend = 0;
    while(j<(sizeof(arr)/sizeof(arr[0]))){
        if(arr[j] < 0){
            negatives[negativeend] = arr[j];
            negativeend++;
        }
        if(j-i+1<windowSize){
            j++;
        } else if(j-i+1 == windowSize) {
            if(negativestart < negativeend){
                cout << negatives[negativestart] <<" ";
            } else {
                cout << 0 <<" ";
            }
            j++;
        } else {
            if(arr[i] == negatives[negativestart]){
                negativestart++;
            }
            if(negativestart < negativeend){
                cout <<negatives[negativestart] << " ";
            } else {
                cout << 0 << " ";
            }
            i++;
            j++;
        }
        // cout <<endl;
        // for(int d=0;d<sizeof(arr)/sizeof(arr[0]);d++){
        //     cout <<negatives[d] <<" ";
        // }
    }
    return 0;
}