//Program to insert an element in a Linked List
#include<bits/stdc++.h>
using namespace std;

class Node
	{
	public:

		int data;
		Node* next;

	};

void push(Node** head_ref,int new_data) //Push front
{
Node* new_node = new Node();
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}	


void insertAfter(Node* prev,int data) //Push after the prev node
{
if(prev==NULL)
{
cout<<"Previous element cannot be NULL";	
return;
}

Node* new_node = new Node();
new_node->data = data;
new_node->next = prev->next;
prev->next = new_node;

}

void append(Node* head_ref,int data)  //push at the end
{
if(head_ref==NULL)
{
	cout<<"Head_ref cannot be NULL";
	return;
}
Node* last = head_ref;
while(last->next!=NULL) //find the last node
{
	last = last->next;
}
Node* new_node = new Node();
new_node->data = data;

last->next = new_node;

}

void printList(Node* node)
{

while(node!=NULL)
{
cout<<node->data<<" ";
node=node->next;
}


}


int main()
{
	Node* head = NULL;
	push(&head,9);
	push(&head,3);
	push(&head,2);
	insertAfter(head->next,100);
	append(head,90);

	printList(head);

	return 0;
}










































































































