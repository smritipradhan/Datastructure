
//Iterative solution for inserting a node into BST

#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
Node* left;
Node* right;
 
Node(int d)
{
	data = d;
	left = NULL;
	right = NULL;
}
};
Node* Insert(Node* root,int key)
{
Node* temp = new Node(key);
Node* cur = root;
Node* parent = NULL;

while(cur!=NULL)
{
parent = cur;
if(cur->data>key)
{
	cur = cur->left;
}
else if(cur->data<key)
{
	cur = cur->right;
}
else
	return root;
}

if(parent==NULL)
return temp;

if(parent->data>key)
{
	parent->left = temp;
}
else 
{
	parent->right = temp;
}

return root;
}	

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);    
    }
} 

int main()
{
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(15);
	root->right->left = new Node(12);
	root->right->right = new Node(18);
	Insert(root,20);
	//cout<<root->right->right->right->data;
	inorder(root);
	return 0;
}