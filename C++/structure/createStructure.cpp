#include <iostream>
using namespace std;

//structure can be passed by reference and passed by value

struct reactangle {
    int length;
    int breadth;
} r3; // initialize like this also

struct reactangle r4; // intialze as global variable

struct student{

    int id;
    char name[10];
    char department[10];
};

int main() {
    struct reactangle hula;
    reactangle hullll;
    hula.length = 2;
    hula.breadth = 10;
    struct reactangle hula2={2,5};
    cout << "area of hula " << hula.length*hula.breadth <<endl ;

    struct student parduman={415,"parduman","cse"};
    cout << "student is " << parduman.id << " " << parduman.name << " " << parduman.department ;
}