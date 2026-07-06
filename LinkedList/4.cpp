#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val,Node* next=nullptr){
        data=val;
        
        

    }


};

void insertAtEnd(Node* &head,int val){
    //edge case
    //for circular ll
    Node* newnode =new Node(val);
    if(head==NULL){
        head=newnode;
        head->next=head;

    }  // edge case 1 
    if(head->next==NULL){ //edge case 2
        head->next=head;

    }

    
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;

    }

    temp->next=newnode;
    newnode->next=head;

    

}
int main(){
    return 0 ;

}