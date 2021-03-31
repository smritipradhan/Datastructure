//Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list,
//instead you will be given access to the node to be deleted directly.
//It is guaranteed that the node to be deleted is not a tail node in the list.


class Solution {
public:
    void deleteNode(ListNode* node)
    {
      node->val = node->next->val;  //Copying the next node value to current
      ListNode *cur = node->next;   //Initialising new pointer pointing to the next 
	  //node of the node given
      node->next = cur->next;  //Changing the next pointer of the node given . 
      delete(cur);    //Instead of deleting the node given we copied the value of the 
	  //next pointer and we will delete the next node.Cur is pointing to that node currently so we delete it
      cur = nullptr;   
    }
};
