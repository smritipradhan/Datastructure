#include<bits/stdc++.h>
using namespace std;

struct 	Node
{
	int data;
	Node* right ;
	Node* left;

	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;

	}
};

Node* getSucessor(Node* cur) //case when the succesor is present 
{
if(cur==NULL)return cur;
cur = cur->right;
while(cur!=NULL && cur->left!=NULL)
{
	cur = cur->left;
}

return cur;
}


Node* delete_(Node* root,int key)
{
if(root==NULL)return root;

//first need to search the key 
if(root->data > key) //when the key is on left side
{
root->left = delete_(root->left,key);
}
else if(root->data<key) //when the key is on right side
{
root->right = delete_(root->right,key);
}
else //when root->data is same as 
{
	//when the left node is NULL
	//also handles when we need to delete the leaf node
	if(root->left==NULL)
	{
		Node* temp = root->right;
		delete root;
		return temp;
	}
	//when the right node is NULL
	//also handles when we need to delete the leaf node

	else if(root->right==NULL)
	{
		Node* temp = root->left;
		delete root;
		return temp;
	}
	//when nothing is NULL
	else
	{
		Node* temp = getSucessor(root);
		root->data = temp->data; //just replace
		root->right = delete_(root->right,temp->data);
	}
}
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
		
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=15;
	
	root=delete_(root,x);
	inorder(root);
}

