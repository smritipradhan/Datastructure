

/*

Given the head of a singly linked list, return true if it is a palindrome.
Input: head = [1,2,2,1]
Output: true
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> list;
        ListNode* it = head;
        int left, right;
        
        if (head == nullptr) {
            return true;
        }
        
        while(it != nullptr) {
            list.push_back(it->val);
            it = it->next;
        }
        if (list.size() > 1) {
            left = 0;
            right = list.size()-1;
            while (left <= right) {
                if (list[left] != list[right]) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
