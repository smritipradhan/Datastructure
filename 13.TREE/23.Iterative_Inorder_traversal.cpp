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
void inorder(Node* root)
{
if(root==NULL)return;
stack<Node*> s;
Node* cur = root;
while(s.empty()==false || cur!=NULL)
{
while(cur!=NULL)
{
s.push(cur);
cur = cur->left;

}
cur = s.top();
s.pop();

cout<<cur->key<<" ";
cur = cur->right;


}


}
int main() {
    
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    
    inorder(root);
}