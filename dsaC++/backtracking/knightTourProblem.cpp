#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n){
    if(x < n && y < n && x >= 0 && y>=0 && arr[x][y] == 0){
        return true;
    } 
    return false;
}

bool knightPlacement(int **arr, int x, int y, int n, int Moves){
    int xMove[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1};
    cout <<"code running "   <<Moves <<endl;
    if(isSafe(arr, x, y, n)){
        if(Moves == n*n){
            arr[x][y] = Moves;
            return true;
         }
        arr[x][y] = Moves;
        for(int i=0; i<8;i++){
            if(knightPlacement(arr, x+xMove[i], y+yMove[i], n, Moves+1)){
                return true;
            }
        }
        arr[x][y] = 0;
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
    
    if(knightPlacement(arr,0,0,n,1)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<< " " << setw(2) <<arr[i][j] <<" ";
            }
            cout <<endl;
        }
    } else {
        cout <<"Not Possible";
    }
    return 0;
}