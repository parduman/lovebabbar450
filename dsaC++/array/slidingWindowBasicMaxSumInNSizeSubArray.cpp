#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,6,7,8,9}, windowSize = 3;

    // solution

    int i=0,j=0,sum=0,maxSum=0;
    while(j<(sizeof(arr)/sizeof(arr[0]))){
        if((j-i) < windowSize){
            sum = sum + arr[j];
            maxSum = maxSum + arr[j];
            j++;
        } else {
            sum = sum + arr[j] - arr[i];
            if(sum > maxSum) maxSum = sum;
            i++;
            j++;
        }
    }
    cout << "maximum sum of subarray 3 is : " <<maxSum; 
    return 0;
}