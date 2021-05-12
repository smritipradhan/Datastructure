#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node* reverseK(Node* head,int k)
{
Node* cur = head;
if(head==NULL)
return;
int count  = 0 ;
Node* prev = NULL;
Node* next  = NULL;
while(cur!=NULL && count<k)
{
next = cur->next;
cur->next = prev;
prev = cur;
cur = next;
count++;

}
if(next!=NULL)
{
	Node* head_rest = reverseK(next,k);
	head->next = head_rest;
}

return prev;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	head->next->next->next->next->next->next=new Node(70);
	printlist(head);
	head=reverseK(head,3);
	printlist(head);
	return 0;
} 