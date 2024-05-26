#include<iostream>
using namespace std;

// hare and tortoise algorithm
// floyds algorithm

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
}


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

bool removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int calcLen(Node* head){
    int count =0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* appendLastK(Node* head,int k){
    int n = calcLen(head);
    int count = 1;
    k = k % n;
    Node* temp = head;
    Node* newTail;
    Node* newHead;

    while(temp->next!=NULL){
        if(count==(n-k)){
            newTail = temp;
        }
        if(count==(n-k+1)){
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    newTail->next = NULL;
    temp->next = head;
    return newHead;
}
int main(){
     Node* head = new Node(1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    displayList(head);
    head = appendLastK(head,3);
    displayList(head);
}