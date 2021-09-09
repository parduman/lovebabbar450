#include<iostream>
#include <stdio.h>
#include<map>

using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int sum = 0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(arr[i] == 0 || sum ==0 || m.find(sum) != m.end()){
            cout<< 1;
            return 1;
        }
        m[sum] = 1;
    }
    cout <<0;
    return 0;
}