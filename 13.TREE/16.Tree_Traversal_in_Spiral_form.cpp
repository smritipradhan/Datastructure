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

void printSpiral(Node* root)
{
if(root==NULL)return;
bool reverse = false;
queue<Node*> q;
q.push(root);
stack<int> s;

while(q.empty()==false)
{
  int count = q.size();

  for(int i=0;i<count;i++)
  {
    Node* cur = q.front();
    q.pop();

    if(reverse)
    {
      s.push(cur->key);

    }
    else
    {
      cout<<cur->key<<" ";
    }
    if(cur->left!=NULL)
    {
      q.push(cur->left);
    }
    if(cur->right!=NULL)
    {
      q.push(cur->right);
    }
  }
  if(reverse)
  {
    while(s.empty()==false)
    {
      cout<<s.top()<<" ";
      s.pop();
    }
  }
  reverse = !reverse;
}

}
int main() {
  
  Node *root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->right=new Node(7);
  
  printSpiral(root);
}