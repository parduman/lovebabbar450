// Longest Common Subsequence Problem solution using recursion
// Given two sequences, find the length of longest subsequence present in both of them.
// A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.

// LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. 
// LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4. 

// For example, “abc”,  “abg”, “bdf”, “aeg”,  ‘”acefg”, .. etc are subsequences of “abcdefg”.

#include <iostream>
#include <string>

using namespace std;

int longestCommonSubsequence(string string1, string string2, int s1, int s2, int* arr[]){
    if(s1 == 0 || s2 == 0){
        return 0;
    }
    if(arr[s1-1][s2-1] >= 0){
        return arr[s1-1][s2-1];
    }
    if(string1[s1-1] == string2[s2-1]){
        return arr[s1-1][s2-1] = 1 + longestCommonSubsequence(string1, string2, s1-1, s2-1, arr);
    } else {
        return arr[s1-1][s2-1] = max(longestCommonSubsequence(string1, string2, s1-1, s2, arr), longestCommonSubsequence(string1, string2, s1, s2-1, arr));
    }
}



int main() {
    string string1 = "ABCDGH";
    string string2 = "AEDFHR";
    int ** arr;
    arr = new int*[string1.size() + 1];
    for(int i=0;i<=string1.size();i++){
        arr[i] = new int[string2.size() + 1];
    }
    for(int i=0;i<=string1.size();i++){
        for(int j=0;j<=string2.size();j++){
            arr[i][j] = -1;
        }
    }

    cout <<longestCommonSubsequence(string1, string2, string1.size(), string2.size(), arr);

    return 0;
}