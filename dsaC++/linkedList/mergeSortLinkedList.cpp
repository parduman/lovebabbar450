 #include <iostream>
// #include <string>
// #include <unordered_map>

using namespace std;

class ListNode {
    public:
        ListNode* next;
        int val;
        ListNode* head;
        ListNode* end;

        ListNode(){
            this->val = 0;
            this->next = NULL;
        }

        ListNode(int data){
            this->val = data;
            this->next = NULL;
        }

        void push(int data){
            ListNode* naya = new ListNode(data);
            if(this->end == NULL){
                this->head = naya;
                this->end = naya;
            } else {
                this->end->next = naya;
                this->end = naya;
            }
        }

        void Display(){
            ListNode* temp = this->head;
            while(temp != NULL){
                cout <<temp->val << " -> ";
                temp = temp->next;
            }
        }
};

    ListNode* merge(ListNode* m1, ListNode* m2){
        ListNode* ans = new ListNode();
        if(m1 == NULL || m2 == NULL){
            return NULL;
        }
        ListNode* anshead = ans;
        while(m1&&m2){
            ListNode*temp = NULL;
            if(m1->val<m2->val){
                temp = m1;
                m1 = m1->next;
            } else {
                temp = m2;
                m2 = m2->next;
            }
            ans->next = temp;
            ans = ans->next;
        }
        if(m1){
            ans->next = m1;
        }
        if(m2){
            ans->next = m2;
        }
        return anshead->next;
    }
    
    ListNode* mergesort(ListNode* head){
        if(head == NULL){
            return NULL;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* m1 = mergesort(head);
        ListNode* m2 = mergesort(slow->next);
        
        ListNode* m3 = merge(m1,m2);
        return m3;
    }

int main(){
    ListNode ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.push(60);
    ll.push(70);
    ll.Display();
    ll.head = mergesort(ll.head);
    ll.Display();

    return 0;
}