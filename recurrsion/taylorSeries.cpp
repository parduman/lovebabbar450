#include <iostream>
#include <stdio.h>
using namespace std;

double taylor(int x, int n){
    static double fac = 1;
    static double cubic = 1;

    if(n == 0) return 1;
    double r = taylor(x,n-1);
    cubic = cubic*x;
    fac = fac*n;
 
    return r + cubic/fac;
};

double optimisedTaylorHornerRule(double x, double n){
    static double s;
    if(n==0) return s;
    s = 1 + (x/n)*s;
    return optimisedTaylorHornerRule(x, n-1);
}

int main() {
    
    cout << taylor(4,15) <<endl;
    cout << optimisedTaylorHornerRule(4,15);
    return 0;
};