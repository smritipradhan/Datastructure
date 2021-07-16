#include<bits/stdc++.h>
using namespace std;

struct Node
{
int key;
Node* left =NULL;
Node* right = NULL;

Node(int k)
{
	key = k;
	left = NULL;
	right = NULL;
}
};
void printVerticalOrder(Node* root)
{
if(root==NULL)return;
//we need to do level order traversal
map<int,vector<int>> m;
int hd = 0;
queue<pair<Node*,int>> q;
q.push(make_pair(root,hd));
while(q.empty()==false)
{

pair<Node*,int> temp = q.front();
q.pop();
hd = temp.second;
Node* node = temp.first;
m[hd].push_back(node->key);

if(node->left!=NULL)
{
q.push(make_pair(node->left,hd-1));
}
if(node->right!=NULL)
{
q.push(make_pair(node->right,hd+1));
}
}
map<int,vector<int> >::iterator itr;
for(itr = m.begin();itr!=m.end();itr++)
{
    for(int i=0;i < itr->second.size(); i++)
    {
        cout<<itr->second[i]<<" ";
    }
    cout<<endl;
}


}
int main()
{
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->left->right = new Node(11);
    root->right->right->left->right->right = new Node(12);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);

	return 0;
}
