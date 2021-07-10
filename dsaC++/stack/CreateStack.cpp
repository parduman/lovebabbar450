#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class MyStack {
    private: 
        int maxSize;
        long* stackArray;
        int top;

    public:
        MyStack(int s){
            this->maxSize = s;
            stackArray = new long[this->maxSize]();
            top = -1;
        }

        void push(long val){
            if(top >= maxSize) {
                cout << "stack is full";
                return;
            }
            this->stackArray[++top] = val;
        }

        long pop(){
            if(top > -1){
                return stackArray[top--];
            }
            cout << "stack is empty";
            return -1;
        }

        long peek(){
            if(top > -1){
                return stackArray[top];
            }
            cout << "stack is empty";
            return -1;
        }

        bool isEmpty(){
            if(top > -1){
                return false;
            }
            return true;
        }

        bool isFull(){
            if(top >= maxSize){
                return true;
            }
            return false;
        }
};

int main() {

    MyStack s(10);
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    s.push(600);

    while (!s.isEmpty()) {
        cout << s.pop() <<endl;
    }
    cout<< "stack is empty now";

    
    return 0;
}