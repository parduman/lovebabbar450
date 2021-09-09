#include<iostream>
#include <queue>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* head){
    queue<Node *> q;
    if(!head){
        return;
    }
    q.push(head);
    while(!q.empty()){
        Node* curr = q.front();
        cout <<curr->data <<" ";
        q.pop();
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

int main(){
    Node* head = new Node(10);
    head->left = new Node(20);
    head->right = new Node(30);
    head->right->right = new Node(40);
    head->left->left = new Node(280);

    levelOrderTraversal(head);

}