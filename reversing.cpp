#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

void displayList(Node* head){
    Node* temp = head;
    if(head == NULL)
        return;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    return;
}

// insert node at tail
void insertNode(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    if(head->next== NULL){
        head->next = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* reverseKnodes(Node* &head,int k){
    int count = 0;
    Node* prev = NULL;
    Node* curr = head;
    Node* nextptr = curr;
    while(curr!=NULL && count < k){
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reverseKnodes(nextptr,count);
        head = prev;
    }
    return head;
}

int main(){
    Node* head = new Node(1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    displayList(head);
    reverseKnodes(head,2);
    displayList(head);

    return 0;
}