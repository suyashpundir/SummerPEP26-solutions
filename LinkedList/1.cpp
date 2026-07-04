#include<iostream>
using namespace std;

int main(){

    Node* curr = head;
    while (curr->next!=NULL){
        curr=curr->next;


    }
    curr->next= val;
    


    return 0;

}