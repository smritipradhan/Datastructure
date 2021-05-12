#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	Node* next; 
	Node (int x){
	    data=x;
	    next=NULL;
	}
}; 

int getIntersection(Node* head1,Node* head2)
{
unordered_set<Node*> s;
Node* cur = head1;

while(cur!=NULL)
{
	s.insert(cur);
	cur=cur->next;
}

cur = head2;
while(cur!=NULL)
{
if(s.find(cur)!=s.end())
{
	return cur->data;
}
cur = cur->next;

}
return -1;
}
int main() 
{ 
	/* 
		Creation of two linked lists 
		1st 3->6->9->15->30 
		2nd 10->15->30 
	
		15 is the intersection point 
	*/

	Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

	cout <<getIntersection(head1, head2); 
} 