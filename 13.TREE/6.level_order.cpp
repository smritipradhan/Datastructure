#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int k)
	{
		data = k;
		right = left = NULL;
	}

};

void level_order(Node* root)
{

if(root==NULL)
	return;

queue<Node*> q;
q.push(root);

while(q.empty()==false)
{
Node* cur = q.front();
q.pop();
cout<<cur->data<<" ";

if(cur->left!=NULL)
	q.push(cur->left);


if(cur->right!=NULL)
	q.push(cur->right);


}

}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
	level_order(root);
	return 0;
	
	}