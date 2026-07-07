/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        Node* curr = head;
        Node* newNode= new Node(key);
        if(head==NULL){
            return newNode;
        }
        
        if(key<head->data){
            newNode->next=head;
            return newNode;
        }
        
        
        // Code here
        while(curr->next !=NULL && curr->next->data<key){
            curr=curr->next;
            
            
        }
        newNode->next= curr->next;
        curr->next=newNode;
        return head;
        
    }
};