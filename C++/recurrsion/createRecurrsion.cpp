#include <iostream>
#include <stdio.h>
using namespace std;

void fun(int n){
    static int i; //global variable
    cout << n << " ";
    cout<< i++ << " i " << endl;
    if(n > 0){
        fun(n-1);
    }
}

int main() {
    fun(10);
    return 0;
}