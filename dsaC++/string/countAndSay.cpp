#include <iostream>
#include <string>
// #include <unordered_map>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
       string result = countAndSay(n-1);
            return this->count(result);

        
    }
    
    string count(string n){
        string result = "";
        int i = 0, j = 0;
        while(i<n.size()){
            int count = 1;
            j = i;
            while(n[j+1] == n[j]){
                j++;
                i++;
                count++;
            }
            string toadd = to_string(count) + n[i];
            result += toadd;
            i++;
        }
        return result;
    }
};



// 1
// 11
// 21
// 1211
// 111221
// 312211
// 12112221
// 1112213211
// 312211131221
// 1311223213112211
//https://leetcode.com/problems/count-and-say/