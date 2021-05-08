//program to delete a key in a Linked List
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
	(*head_ref)=new_node;
}	
void printMiddle(Node* head)
{
Node* slow = head;
Node* fast = head;


while(fast!=NULL && fast->next!=NULL)
{
slow = slow->next;
fast = fast->next->next;

}

cout<<slow->data;

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
push(&head,60);
printList(head);
cout<<endl;
printMiddle(head);
return 0;
}
