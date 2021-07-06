#include <iostream>
// #include <string>
// #include <unordered_map>

using namespace std;

class Node {
    public:
        Node* next;
        int data;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    public:
        Node* head;
        Node* end;
    
    LinkedList(){
        this->head = NULL;
        this->end = NULL;
    }

    void push(int data){
        // cout <<"pushing";
        Node* naya = new Node(data);
        if(this->end == NULL){
            this->head = naya;
            this->end = naya;
        } else {
            this->end->next = naya;
            this->end = naya;
        }
    }

    void Display(){
        Node* temp = this->head;
        // cout <<"here";
        while(temp != NULL){
            cout <<temp->data << " -> ";
            temp = temp->next;
        }
    }

    void reverse(){
        if(this->head == NULL || this->head->next == NULL){
            return;
        }
        Node *current=this->head, *prev = NULL;
        this->end = this->head;
        while(current != NULL){
            Node *nextnode = current->next;
            current->next = prev;
            prev = current;
            current = nextnode;
        }
        this->head = prev;
    }

    Node* reverseInBatchOfK(Node* head ,int k){
        if(head == NULL){
            return NULL;
        }
        Node* current = head, *prev = NULL, *nextNode = NULL;
        for(int i=0;i<k&&current != NULL;i++){
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        if(nextNode != NULL){
            head->next = this->reverseInBatchOfK(nextNode, k);
        }
        return prev;
    }


};


int main(){
    LinkedList ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.push(60);
    ll.push(70);
    ll.Display();
    // ll.reverse();
    cout<<endl;
    ll.Display();
    cout <<endl <<"reversing in batch of 3" <<endl; 
    ll.head = ll.reverseInBatchOfK(ll.head, 3);
    ll.Display();

    return 0;
}


