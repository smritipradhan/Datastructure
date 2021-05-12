#include <bits/stdc++.h> 
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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

void remove_duplicates(Node* head)
{
    
Node* cur = head;

while(cur!=NULL&&cur->next!=NULL)
{
if(cur->data == cur->next->data)
{
    cur->next = cur->next->next;
  
}
else
{
 
    cur = cur->next;
}
}



}

int main() 
{ 
    Node* head = NULL;
    push(&head,30);
    push(&head,30);
    push(&head,30);
    push(&head,20);
    push(&head,20);
    push(&head,10);
    printlist(head);
    remove_duplicates(head);
    printlist(head);
    return 0;
} 