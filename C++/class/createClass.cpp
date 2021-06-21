#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){ //constructor
            length = l;
            breadth = b;
        };

        int area();

        ~Rectangle(){ //destructor

        }
};

int Rectangle :: area(){
            return length*breadth ;
    };



int main() {
    Rectangle r(10,20);
    r.area();
    return 0;
}