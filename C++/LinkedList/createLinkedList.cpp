#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node *first;

void createLinkedList(int A[],int n){
    struct Node *t , *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        t = new struct Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    // return first;
}

void Display(struct Node *p){
    while(p!=NULL){
        cout <<p->data <<" -> ";
        p = p->next;
    }
}

void DisplayRec(struct Node*p){
    if(p == NULL){
        return;
    }
    cout << p->data <<" -> ";
   return DisplayRec(p->next);
}

int main() {
    int A[5]={3,5,7,10,15};
    // struct Node *linkedList;
    // linkedList = createLinkedList(A, 5);
    createLinkedList(A, 5);
    Display(first);
    cout <<endl;
    DisplayRec(first);

    return 0;
}