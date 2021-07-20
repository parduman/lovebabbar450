#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct Stack{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st){
    cout << "enter Stack size ";
    cin >> st->size;
    st->top = -1;
    st->s = new int [st->size];
}

void Display(struct Stack st){
    for(int i =0;i<st.size;i++){
        if(st.s[i] == 0){
            break;
        }
        cout << st.s[i] << " ";
    }
    cout << "Stack printed";
}

void Push(struct Stack *st, int val){
    if(st->top<st->size){
        st->top++;
        st->s[st->top] = val;
    } else {
        cout <<endl << "stack overflow";
    }
}

int pop(struct Stack *st){
    int x = -1;
    if (st->top != -1){
        x = st->s[st->top];
        st->s[st->top--] = 0;
    } else {
        cout << "stack is empty";
    }
    return x;
}

int main() {
    struct Stack st;
    create(&st);
    Push(&st, 10);Push(&st, 20);Push(&st, 30);Push(&st, 40);
    cout<<endl << pop(&st) <<endl;
    Display(st);

    return 0;
}