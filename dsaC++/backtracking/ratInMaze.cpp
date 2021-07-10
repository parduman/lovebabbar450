#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool isSafe(int **arr, int x, int y, int n){
    if(x >=0 && y>= 0 && x < n && y < n && arr[x][y] == 1){
        // cout<<"true" <<x <<" " <<y <<" " <<arr[x][y] <<" " <<endl;
        return true;
    }
    // cout <<"false" <<x <<" "  <<y <<" " <<arr[x][y] <<" " <<endl;
    return false;
}

bool rateInMaze(int ** arr, int x, int y, int n, int** solArr){
    if(isSafe(arr, x, y, n)){
        if((x == (n-1)) && (y == (n-1))){
            solArr[x][y] = 1;
            return true;
    }
        solArr[x][y] = 1;
        if(rateInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(rateInMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;
    }
    return false;
}

int main() {

    int n;
    cin>>n;

    int** arr = new int*[n];
    for(int i=0; i<n;i++){
        arr[i] = new int[n]();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>arr[i][j];
        }
    }
    cout <<endl;
    int ** solArr = new int* [n];
    for(int i=0;i<n;i++){
        solArr[i] = new int[n]();
    }
    
    if(rateInMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout <<solArr[i][j] <<" ";
            }
            cout <<endl;
        }
    }
    return 0;
}
//5
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1