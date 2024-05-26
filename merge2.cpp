#include <iostream>
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

Node* merge2(Node* l1, Node* l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    if(l1->data>l2->data) swap(l1,l2);
    Node* res = l1;
    while(l1!=NULL and l2!=NULL){
        Node* temp = l1;
        while(l1!=NULL and l1->data <= l2->data){
            temp = l1;
            l1 = l1->next;
        }
        temp->next = l2;
        swap(l1,l2);
    }
    return res;
}

void printLink(Node* head){
    while(head!=NULL){
        cout << head->data << " -> ";
        head=head->next;
    }
}

int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(4);
    head1->next->next->next = new Node(6);

    Node* head2 = new Node(3);
    head2->next = new Node(7);
    head2->next->next = new Node(9);
    head2->next->next->next = new Node(10);

    Node* res = merge2(head1,head2);
    printLink(res);
    return 0;
}

