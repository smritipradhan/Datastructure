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
new_node->next  = (*head_ref);
(*head_ref) = new_node;
}

void delete_position(Node** head_ref,int pos)
{
Node* temp = (*head_ref);


if(temp==NULL)
	return;

for(int i=0;i<pos-1 && temp!=NULL;i++)
{
	temp = temp->next;

}
if(temp==NULL ||temp->next==NULL)
	return;

Node* next = temp->next->next;
free(temp->next);
temp->next = next;


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

push(&head,50);

printList(head);
}


