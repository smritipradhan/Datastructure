/*

Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

*/



class Solution
{
public:

ListNode* reverseList(ListNode* head)
{
ListNode* cur = head;
ListNode* prev = NULL;
ListNode* next = NULL;


while(cur!=NULL)
{
next = cur->next;
cur->next = prev;
prev = cur;
cur = next;


}
head = prev; //Now the last prev element will be the head ;
return head;
}

};
