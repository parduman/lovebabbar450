#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class LowerTri{
    private:
        int* A;
        int n;
    public:
    LowerTri(){
        this->n = 2;
        this->A = new int[(2*(2+1))/2];
    }
    LowerTri(int n){
        this->n = n;
        this->A = new int[(n*(n+1))/2];
    }
    ~LowerTri(){
        delete A;
    }
    void Set(int i, int j, int k);
    int Get(int i, int j);
    void Display();
};

void LowerTri::Set(int i, int j, int x){
    if(i>=j){
        this->A[((i*(i-1))/2)+j-1] = x;
    }
}

int LowerTri::Get(int i, int j){
    if(i>=j){
        return this->A[((i*(i-1))/2)+j-1];
    }
    return 0;
}

void LowerTri::Display(){
    for(int i=1;i<=this->n;i++){
        for(int j=1;j<=this->n;j++){
            if(i>=j){
                cout <<this->A[((i*(i-1))/2)+j-1] <<" ";
            } else {
                cout <<" ";
            }
        }
        cout <<endl;
    }
}

int main() {
    LowerTri lm(4);
    lm.Set(1,1,1);lm.Set(2,1,1);lm.Set(3,1,1);lm.Set(4,1,1);lm.Set(2,2,1);lm.Set(3,3,1);lm.Set(4,4,1);lm.Set(3,2,1);lm.Set(4,2,1);lm.Set(4,3,1);
    lm.Display();
    return 0;
}