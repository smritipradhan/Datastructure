#include<stdlib.h>
#include<stdio.h>


//FINDING THE MIDDLe ELEMENT OF THE linked list
struct Node 
{
    struct Node* right;
    int val;
    
};
void push(struct Node** head_ref,int new_data)
{
 struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 new_node->val = new_data;
 new_node->right = (*head_ref);
 (*head_ref) = new_node;
 
}
int printMiddle(struct Node* head)
{
 struct Node* fast = head;
 struct Node* slow = head;
 
 if(head!=NULL)
 {
 while(fast!=NULL && fast->right!=NULL)
 {
  slow = slow->right;
  fast = fast->right->right;
 }
 }
 printf("The middle element is --> %d",slow->val);
}

void printList(struct Node *ptr)  
{  
    while (ptr != NULL)  
    {  
        printf("%d->", ptr->val);  
        ptr = ptr->right;  
    }  
    printf("NULL\n");  
}  
  

int main()  
{  
    struct Node* head = NULL;  
    int i;  
  
    for (i=5; i>0; i--)  
    {  
        push(&head, i);  
        printList(head);  
        printMiddle(head);  
    }  
  
    return 0;  
}  
