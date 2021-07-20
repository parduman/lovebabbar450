#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct matrix{
    int A[10];
    int n;
};

void Set(struct matrix *m, int i, int j, int x){
    if(i ==j){
        (*m).A[i-1] = x;
    }
};

int get(struct matrix m, int i, int j){
    if(i == j){
        return m.A[i-1];
    } else {
        return 0;
    }
}

void Display(struct matrix m){
    int i , j;
    for(i = 0; i< m.n; i++){
        for(j =0; j<m.n; j++){
            if(i == j){
                cout << m.A[i];
            } else {
                cout << 0;
            }
        }
        cout <<endl;
    }
}

int main() {
    struct matrix m;
    m.n = 4;
    Set(&m, 1, 1, 5);Set(&m, 2, 2, 6);Set(&m, 3, 3, 7);Set(&m, 4, 4, 8);
    Display(m);

    cout <<endl  <<get(m, 2, 2);
    return 0;
}