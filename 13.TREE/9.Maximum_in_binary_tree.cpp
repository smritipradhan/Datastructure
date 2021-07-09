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
right = left = NULL;
}


};

int maxi(Node* root)
{
if(root==NULL)
	return 0;

return max(root->data,max(maxi(root->left),maxi(root->right)));

}





int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
	cout<<maxi(root);
	return 0;
	
	}