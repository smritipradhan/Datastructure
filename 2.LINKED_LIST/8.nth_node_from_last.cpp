#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

};
void push(Node** head_ref,int data)
{
Node* new_node = new Node();
new_node->data = data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
void nth(Node** head_ref,int n)
{
Node* temp  = (*head_ref);
int count = 0;

while(temp!=NULL)
{
	count++;
	temp=temp->next;
}

Node* cur = (*head_ref);
int p = count-n;
while(p>0)
{
	p--;
	cur=cur->next;
}
cout<<cur->data;
}
void printList(Node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}
int main()
{
Node* head = NULL;
push(&head,10);

push(&head,20);

push(&head,30);

push(&head,40);


printList(head);
cout<<endl;
nth(&head,2);
return 0;
}