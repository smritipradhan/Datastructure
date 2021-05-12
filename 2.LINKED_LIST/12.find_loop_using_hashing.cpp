#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

void push(Node** head,int data)
{
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;

}

bool isLoop(Node* head)
{
	unordered_set<Node*> s;

	Node* cur = head;

	while(cur!=NULL)
	{

	if(s.find(cur)!=s.end())
	{
	return true;
	}
	s.insert(cur);
	cur = cur->next;
	}
return false;


}
int main()
{
	Node* head = NULL;
	push(&head,15);
	push(&head,10);
	push(&head,12);
	push(&head,20);
	head->next->next->next->next = head->next;


	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;

}