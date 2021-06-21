#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i;
    cout << "give size of array";
    cin >>i;
    int *a = new int[i];
    for(int j=0;j<i;j++){
        cin >>a[j];
    }
    int start = 0, end = i-1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    cout <<endl;
    for(int j=0;j<i;j++){
        cout <<a[j] <<"  ";
    }
    return 0;
}