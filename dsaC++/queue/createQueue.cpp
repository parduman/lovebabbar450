#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class MyQueue {
    private: 
        int maxSize;
        long* queueArray;
        int start;
        int end;

    public:
        MyQueue(int s){
            this->maxSize = s;
            queueArray = new long[this->maxSize]();
            start = -1;
            end = -1;
        }

        void push(long val){
            if(end >= maxSize) {
                cout << "queue is full" <<endl;
                return;
            }
            this->queueArray[++end] = val;
        }

        long pop(){
            if(end > start){
                return queueArray[++start];
            }
            cout << "queue is empty" <<endl;
            return -1;
        }

        long peek(){
            if(end > start){
                return queueArray[start];
            }
            cout << "queue is empty" <<endl;
            return -1;
        }

        bool isEmpty(){
            if(end <= start){
                return true;
            }
            return false;
        }

        bool isFull(){
            if(end >= maxSize){
                return true;
            }
            return false;
        }
};

int main() {

    MyQueue s(4);
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    s.push(600);

    while (!s.isEmpty()) {
        cout << s.pop() <<endl;
    }
    cout<< "QUEUE is empty now";

    
    return 0;
}