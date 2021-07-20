#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    public:
        Queue(){front=rear=-1;size=10;Q=new int[size];}
        Queue(int size){front=rear=0;this->size=size;Q=new int[this->size];}
        void enqueue(int x);
        int dequeue();
        void Display();
};

void Queue::enqueue(int x){
    if((rear + 1)%size == front){
        cout << "queue full";
    } else {
        rear = (rear + 1)%size;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    int x = -1;
    if(front == rear){
        cout << "queue empty";
    } else {
        front = (front+1)%size;
        x = Q[front];
    }
    return x;
}

void Queue::Display(){
    int i = (front+1)%size;
    for(;i != (rear+1)%size;i = (i+1)%size){
        cout <<Q[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q(5);
    q.enqueue(10);q.enqueue(20);q.enqueue(30);q.enqueue(40);
    q.Display();
    cout <<q.dequeue();
    cout <<endl;
    cout <<q.dequeue();
    cout <<endl;
    cout <<q.dequeue();
    cout <<endl;
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.Display();
    return 0;
}