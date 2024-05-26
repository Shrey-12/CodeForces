#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    } 
    temp->next = n;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void displayList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

void deleteNode(Node* &head,int val){
    if(head==NULL){
        cout << "error"<<endl;
        return;
    }
    Node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
int main(){
    Node* head = new Node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,5);
    insertAtTail(head,4);
    displayList(head);
    deleteNode(head,3);
    displayList(head);
}