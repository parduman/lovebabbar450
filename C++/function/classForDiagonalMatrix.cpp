#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class Diagonal{
    private:
     int *A;
     int n;
    public:
        Diagonal(){
            this->n = 2;
            A = new int[2];
        }
        Diagonal(int n){
            (*this).n = n;
            this->A = new int[n];
        }
        ~Diagonal(){
            delete this->A;
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void Display();
};

void Diagonal::Set(int i, int j, int x){
    if(i ==j){
        this->A[i-1] = x;
    }
}

int Diagonal::Get(int i, int j){
    if (i == j){
        return this->A[i-1];
    } else {
        return 0;
    }
}

void Diagonal::Display(){
    for(int i =0; i< this->n; i++){
        for(int j=0; j< this->n; j++){
            if(i == j)
                cout << this-> A[i] <<" ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    Diagonal d(4);
    d.Set(1,1,5); d.Set(4,4,12);
    d.Display();
    
    return 0;
}
