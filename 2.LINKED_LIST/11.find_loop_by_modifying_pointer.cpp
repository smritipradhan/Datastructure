#include <bits/stdc++.h> 
using namespace std; 

class Node{
    int data;
    Node* next;
Node(int x)
{
data = x;
next = NULL;

	}
	};


bool isLoop(Node* head)
{
Node* dummy = new Node(0);
if(head==NULL)
	return false;

Node* cur = head;

while(cur!=NULL)
{
if(cur->next==NULL)
	return false;

if(cur->next == dummy)
	return true;

Node* cur_next = cur->next;
cur->next = dummy;
cur = cur_next;



}




}
int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
} 