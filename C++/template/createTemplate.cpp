#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
class Rectangle{
    private:
        T length;
        T breadth;
    public:
        Rectangle(T l, T b){ //constructor
            length = l;
            breadth = b;
        };

        T area();

        ~Rectangle(){ //destructor

        }
};

template <class T>
T Rectangle<T> :: area(){
            return this->length*this->breadth ;
    };



int main() {
    Rectangle<float> r(10.50,20.10);
    float area = r.area();
    cout << area ;
    return 0;
}