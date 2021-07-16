#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
void preorder(Node* root)
{
if(root==NULL)return;
stack<Node*> s;
Node* cur = root;
s.push(root);
while(s.empty()==false )
{
while(cur!=NULL)
{
cout<<cur->key<<" ";
if(cur->right!=NULL)
{
  s.push(cur->right);
}
cur = cur->left;
}
cur = s.pop();
}


}
int main() {
    
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    
    preorder(root);
}