#include<iostream>
using namespace std;

void deleteAnOSE(Node* head){
    // save ,reconnect, delete

    Node* curr= head;

    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }

    Node* temp= curr->next;
    curr->next=curr->next->next;

    delete temp;


}