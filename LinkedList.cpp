#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
    return;
}

bool search(Node* head,int val){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==val) return true;
        temp = temp->next;
    }
    return false;
}




void insertAtTail(Node* &head,int val){
    if (head==NULL)  {insertAtHead(head,val); return;}
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void deleteNode(Node* &head,int val){
    Node *temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
    return;
}


int main(){
    
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    // deleteNode(head,3);
    cout << search(head,3) << endl;
    return 0;
}