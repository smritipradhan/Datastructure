//program to delete the entire linked list
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

void delete_(Node** head_ref)
{
 
    Node* current = *head_ref;
    Node* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

void printList(Node* node)
{
if(node==NULL)
{
	cout<<"Empty LL";
	return;
}


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
	delete_(&head);

	printList(head);


	return 0;
}