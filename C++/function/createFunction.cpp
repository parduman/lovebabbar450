#include <iostream>
#include <stdio.h>
using namespace std;

int add(int &a, int* b){  // is passed as refernce
    return a+ *b;
};

int main() {
    int k = 3;
    int d = 8;
    cout << add(k,&d);
    return 0;
}

//pass by refernce is possible in c 
//int add(int a, int b){
 //   return a+b;
//};