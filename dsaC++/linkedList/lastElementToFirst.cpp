#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next = NULL;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList{
    public:
        Node* head;
        Node* end;

        LinkedList(){
            head = NULL;
            end = NULL;
        }

        void push(int data){
            Node* n1 = new Node(data);
            if(head == NULL){
                head = n1;
                end = n1;
            } else {
                end->next = n1;
                end = n1;
            }
        }

        void Display(){
            Node* start = head;
            while(start){
                cout <<start->data <<" -> ";
                start = start->next;
            }
        }
};

class Solution{
    public:
        void lastElementToFirst(Node* &Head){
            Node* current = Head;
            while(current->next->next){
                current = current->next;
            }
            Node* last = current->next;
            current->next = NULL;
            last->next = Head;
            Head = last;
        }
};

int main(){
    LinkedList l1;
    l1.push(19);
    l1.push(20);
    l1.push(21);
    l1.push(22);
    l1.push(23);
    l1.push(24);
    l1.push(25);
    l1.Display();

    Solution s;
    s.lastElementToFirst(l1.head);
    cout <<endl;
    l1.Display();


    return 0;
}