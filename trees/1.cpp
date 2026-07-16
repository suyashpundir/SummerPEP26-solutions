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

int count(Node* root){
	if(root==NULL) return 0;
	count(root->right) +count(root->left)+1;
}

int countLeafNodes(Node* root){
	int leaf=0;
	if(root==NULL){
		
		return 0;

	}
	if(root->left ==NULL && root->right==NULL){
		return 1;
	}
	return countLeafNodes(root->left)+countLeafNodes(root->right);;
	
	

	

}
int main(){
	if(root==NULL) return 1;
	int
	return 0;

}
