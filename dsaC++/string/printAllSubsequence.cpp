#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <string>
#include <unordered_map>
#include <queue>
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

void printAllSubsequence(string str1, string s=""){
    int size = str1.size();
    if(size == 0){
        cout <<s <<endl;
        return;
    }
    char lastChar = str1[size-1];
    str1.pop_back();

    printAllSubsequence(str1, s);
    s.push_back(lastChar);
    printAllSubsequence(str1, s);
    return;
}




int main() {
    string str = "abc";

    printAllSubsequence(str);

    return 0;
}