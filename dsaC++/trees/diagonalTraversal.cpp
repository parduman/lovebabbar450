#include<iostream>
#include <queue>
#include <map>
#include <vector>

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
map<int,vector<int>> m;

void DiagonalTraversal(Node* head, int diagonalNumber){
    if(!head){
        return;
    }
    m[diagonalNumber].push_back(head->data);
    DiagonalTraversal(head->left, diagonalNumber + 1);
    DiagonalTraversal(head->right, diagonalNumber);
}

void printAns(){
    for(map<int,vector<int>>::iterator it=m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout << it->second[i] <<" ";
        }
        cout <<endl;
    }
}

int main(){
    Node* head = new Node(8);
    head->left = new Node(3);
    head->right = new Node(10);
    head->right->right = new Node(14);
    head->right->left = new Node(6);
    head->right->left->left = new Node(4);
    head->right->left->right = new Node(7);
    head->right->right->left = new Node(13);
    head->left->left = new Node(1);

    DiagonalTraversal(head, 0);
    printAns();

}