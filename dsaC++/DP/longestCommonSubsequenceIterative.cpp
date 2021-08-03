// Longest Common Subsequence Problem solution using recursion
// Given two sequences, find the length of longest subsequence present in both of them.
// A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.

// LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. 
// LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4. 

// For example, “abc”,  “abg”, “bdf”, “aeg”,  ‘”acefg”, .. etc are subsequences of “abcdefg”.

#include <iostream>
#include <string>

using namespace std;

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

void printMatrix(int **arr, int row, int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout <<arr[i][j] <<" ";
        }
        cout <<endl;
    }
}

void printLongestCommonSubsequece(int **arr, int row, int column, string string1, string string2){
    int i = string1.size(), j = string2.size();
    string result="";
    while(i > 0 && j > 0){
        if(string1[i-1] == string2[j-1]){
            result.push_back(string1[i-1]);
            i--;j--;
        } else if(arr[i-1][j] > arr[i][j-1]){
            i--;
        } else{
            j--;
        }
    }
    cout <<endl << result;
}

int main() {
    string string1 = "ABCDGH";
    string string2 = "AEDFHR";


    int ** arr = generateMatrix(string1.size() + 1, string2.size() + 1);

    for(int i=0;i<=string1.size();i++){
        for(int j=0;j<=string2.size();j++){
            if(i == 0 || j == 0){
                arr[i][j] = 0;
            } else {
                if(string1[i-1] == string2[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1;
                } else {
                    arr[i][j] = max(arr[i][j-1], arr[i-1][j]);
                }
            }
        }
    }
    printMatrix(arr, string1.size() + 1, string2.size() + 1);

    cout <<endl <<"length of longest common subsequence" <<arr[string1.size()][ string2.size()];

    printLongestCommonSubsequece(arr, string1.size() + 1, string2.size() + 1, string1, string2);
    return 0;
}