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

string longestcommonSubsequence(int **arr, string s1, string s2, int row, int column){
    for(int i=0; i<=row; i++){
        for(int j=0;j<=column; j++){
            if(i==0 || j==0){
                arr[i][j] = 0;
            } else if(s1[i-1] == s2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            } else {
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }
    int ii=row+1,jj=column+1;
    string result="";
    while(ii>0 && jj>0){
        if(s1[ii-1] == s2[jj-1]){
            result.push_back(s1[ii-1]);
            ii--;jj--;
        } else if(arr[ii-1][jj] > arr[ii][jj-1]){
            ii--;
        } else{
            jj--;
        }
    }
    return result;
}



int main() {
    string string1 = "ABCDGH";
    string string2 = "AEDFHR";
    int ** arr;
    arr = generateMatrix(string1.size() + 1, string2.size() + 1);
    string longestcommonSubsequenceString = longestcommonSubsequence(arr, string1, string2, string1.size(), string2.size());

    cout << "lenght of supersubstring :" <<(string1.size() + string2.size() - longestcommonSubsequenceString.size());
    return 0;
}