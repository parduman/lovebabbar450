#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool isSafe(int **arr, int x, int y, int n){
    for(int row=0;row<=x;row++){
        if(arr[row][y] == 1){
            
            return false;
        }
        if(x-row >= 0){
            if( y-row >= 0 && arr[x-row][y-row] == 1){
                return false;
            }
            if( y+row < n && arr[x-row][y+row] == 1){
                return false;
            }
        }
    }
    return true;
}

bool nQueen(int **arr, int x, int n){
    if(x>=n){
        return true;
    }
    for(int col=0; col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col] = 1;

            if(nQueen(arr, x+1, n)){
                return true;
            }

            arr[x][col] = 0;
        }
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
    
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout <<arr[i][j] <<" ";
            }
            cout <<endl;
        }
    }
    return 0;
}