#include<bits/stdc++.h>
using namespace std;


class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;

	}
	

	





};

void preOrder(Node* root){
	if(root==NULL){
		return;

	}
	cout<<root->data;
	preOrder(root->left);
	preOrder(root->right);

}
void postOrder(Node* root){
	if(root==NULL){
		return;

	}
	postOrder(root->left);
	
	postOrder(root->right);
	cout<<root->data;

	
}
void inOrder(Node* root){
	if(root==NULL){
		return;

	}
	inOrder(root->left);
	
	postOrder(root->right);
	cout<<root->data;

	
}
int main(){
	return 0;

}
