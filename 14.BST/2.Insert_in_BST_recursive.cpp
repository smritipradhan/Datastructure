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
if(root==NULL) // handle the edge case
{
	root = new Node(key);
	return root;
}


if(key>root->data)
{
	root->right = Insert(root->right,key);
}
else if(key<root->data)
{
	root->left = Insert(root->left,key);\
}
return root;


}

int main()
{
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(15);
	root->right->left = new Node(12);
	root->right->right = new Node(18);
	Insert(root,20);
	cout<<root->right->right->right->data;
	return 0;
}
