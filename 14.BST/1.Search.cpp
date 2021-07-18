#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
Node* left ;
Node* right;

Node(int d)
{
	data  = d;
	left = NULL;
	right = NULL;
}
};

bool Search(Node* root,int key)
{
if(root==NULL)return false;

if(root->data == key)
{
return true;
}

if(root->data>key)
{
	return Search(root->left,key);
}
else
{
	return Search(root->right,key);
}


}
int main()
{
	Node* root = new Node(15);
	root->left = new Node(5);
	root->left->left = new Node(5);
	root->right = new Node(20);
	root->right->left = new Node(18);
	root->right->left->left = new Node(16);
	root->right->right = new Node(80);
	cout<<Search(root,10);
	return 0;
}