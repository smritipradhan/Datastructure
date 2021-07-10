#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int data; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      data=k;
      left=right=NULL;
  }
};

bool isCSum(Node* root)
{

if(root==NULL)return true;

 if(root->left==NULL && root->right==NULL)
        return true;

int l = 0;
int r = 0;
if(root->left)
{
l = root->left->data;
}


if(root->right)
{
r = root->right->data;
}

return (l+r==root->data && isCSum(root->left) && isCSum(root->right));

}

int main() {
	
	Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(1);
	
	cout<<isCSum(root);
}