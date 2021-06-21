#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    char a[] = {'j','o','h','n','/0'}; //create in stack
    char a1[5] = {'j','o','h','n','/0'}; //create in stack
    char a2[] = "john"; //create in stack // same as {'j','o','h','n','/0'} // double quotes should be used
    char *a3 = "john"; //create in heap even if new is not used
    return 0;
}