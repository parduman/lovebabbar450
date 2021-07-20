#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool fun(int a, int b){
    return b < a;
}

int main() {
    vector <int> v;
    int size;
    cout <<"vector size" <<endl;
    cin >>size;
    cout <<"enter elements now" <<endl;
    for(int i=0;i<size;i++){
        int j;
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(),v.end(),fun);
    vector <int>::iterator start = v.begin();
    vector <int>::iterator end = v.begin();
    for(;end<v.end(); end++){
        if(*end < 0){
            break;
        }
    }
    while(start < v.end() && end < v.end()){
        int temp = *start;
        *start = *end;
        *end = temp;
        start = start + 2;
        end = end + 1;
    }
    for(vector <int>::iterator it = v.begin();it<v.end(); it++){
        cout << *it << "  ";
    }
    return 0;
}