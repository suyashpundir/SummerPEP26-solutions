#include<iostream>
using namespace std;

void deleteAnOSE(Node* &head,int pos){
    if(head==nullptr){
        return;
    }

    if(pos==1){
        Node* curr= head;
        head=head->next;
        delete curr;
        return;
    }
    // save ,reconnect, delete

    Node* curr= head;

    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }

    Node* temp= curr->next;
    curr->next=curr->next->next;

    delete temp;


}

Node* deleteAtbeginning(Node* head){
    Node* curr= head;
    Node* temp = curr->next;
    temp=curr;
    delete curr;
}


