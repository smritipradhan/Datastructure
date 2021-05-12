#include<bits/stdc++.h>
using namespace std;
struct Node{
    char data;
    Node* next;
    Node(char x){
        data=x;
        next=NULL;
    }
};

Node *reverseList(Node *head)
{
if(head==NULL || head->next==NULL)
return head;

Node* head_rest = reverseList(head->next);
Node* tail_rest = head->next;
tail_rest->next = head;
head->next = NULL;
return head_rest;

}

bool isPalindrome(Node *head)
{
Node *slow=head,*fast=head;
        while(fast->next!=NULL&&fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *rev=reverseList(slow->next);
        Node *curr=head;
        while(rev!=NULL){
            if(rev->data!=curr->data)
                return false;
            rev=rev->next;
            curr=curr->next;
        }
        return true;
}


int main() 
{ 
	Node *head=new Node('g');
	head->next=new Node('f');
	head->next->next=new Node('g');
	if(isPalindrome(head))
	    cout<<"Yes";
	else
	    cout<<"No";
	return 0;
} 
