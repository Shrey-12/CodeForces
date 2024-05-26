#include <iostream>
using namespace std;

class Node{
    public: 
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

int len(Node* temp){
    int count=0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* reverseK(Node* head,int k){
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    Node* nextptr;
    if(len(head)>=k){
    while(curr!=NULL and count < k){
        Node* nextptr = curr;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count ++;
    }
    if(nextptr!=NULL){
    head->next = reverseK(nextptr,k);
     cout <<"hi";
    return prev;
    }

    } else{
        return head;
    }

}

void printLink(Node* head){
    while(head!=NULL){
        cout << head->val << " -> ";
        head=head->next;
    }
}


int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;
    Node* newHead = reverseK(head,2);
    printLink(newHead);
    return 0;

}