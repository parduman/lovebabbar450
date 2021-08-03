#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <string>
// #include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// int **arr = generateMatrix(5,10);
int** generateMatrix(int row, int column){
    int ** arr;
    arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[column];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            arr[i][j] = -1;
        }
    }
    return arr;
}




int main() {

    return 0;
}