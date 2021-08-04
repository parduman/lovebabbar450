#include <iostream>
 using namespace std;

 int main(){
     int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
     int size = sizeof(arr)/sizeof(arr[0]);
     int start = 0;
     for(int i=0;i<size;i++){
         if(arr[i] < 0){
             int temp = arr[start];
             arr[start] = arr[i];
             arr[i] = temp;
             start++;
         }
     }
     for(int i=0;i<size;i++){
         cout <<arr[i] <<" ";
     }
 }