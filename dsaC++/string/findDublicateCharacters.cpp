#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<char, int> map;
    string s = "geeksforgeeks";

    for(char i:s){
        map[i]++;
    }
    for(unordered_map<char,int>::iterator it=map.begin();it != map.end();it++){
        if(it->second > 1){
            cout <<it->first <<" ";
        }
    }
    return 0;
}
