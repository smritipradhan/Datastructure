//program to reverse a linked List

#include<bits/stdc++.h>
using namespace std;

	class Node
	{
		int data;
		Node* right;

	};

void push(Node** head_ref,int data)
{
Node* new_node = new Node();
new_node->data = data;
new_node->right = (*head_ref);   //80->9->10
(*head_ref) = new_node; 
}

void reverse(Node* head)
{
Node* cur = head;
Node* prev = NULL;
Node* next = NULL;

//9->50->10
//9<-50<-10
//10->50->9
while(cur!=NULL)
{
next = cur->right;
cur->right = prev;
prev = cur;
cur = next;
}

(*head_ref) = prev;

}	

void printList(Node* node)
{
while(node!=NULL)
{
cout<<node->data<<" ";
}
cout<<endl;
}


int main()
{
	Node* head = NULL;
	push(9,&head);
	push(50,&head);
	push(10,&head);

	printList(head);
	return 0;
}