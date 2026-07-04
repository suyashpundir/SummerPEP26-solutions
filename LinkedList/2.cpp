#include<iostream>
using namespace std;



class Node{
    public:


    Node(int val){
        int data=val;
        Node* next= NULL;


    }

    



};
void inserAtBeg(Node* head.int data){

    Node* node =new Node(val);
    node->next= head;
    head=node;
}

void printevenNode(Node* head,int n){
    Node* curr = head;
    while(curr!=NULL){
        if(data%2==0) 
        cout<<data<<" "<<endl;

    }
}


void insertAtpos(Node* &head,int val,int pos){
    Node* node = new Node(n);
    Node* temp = head;
    while(temp!=pos-1 && temp!=NULL){
        node->next=temp->next;
        temp->next= val;


    }
}
int main(){


    
    return 0;

}
