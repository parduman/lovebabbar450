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

void InorderTraversal(Node* head){
    if(!head){
        return;
    }
    InorderTraversal(head->left);
    cout <<head->data <<" ";
    InorderTraversal(head->right);
}

void mirrorTree(Node* head, Node* &newTree){
    if(!head){
        return;
    }
    newTree = new Node(head->data);
    mirrorTree(head->left, newTree->right);
    mirrorTree(head->right, newTree->left);
}


int main(){
    Node* head = new Node(10);
    head->left = new Node(20);
    head->right = new Node(30);
    head->right->right = new Node(40);
    head->left->left = new Node(280);

    cout <<endl;
    InorderTraversal(head);
    Node* mirror = NULL;
    mirrorTree(head, mirror);
    cout <<endl;
    InorderTraversal(mirror);    
}