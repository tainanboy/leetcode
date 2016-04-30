/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //reverse sungly linked list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    	ListNode *prev = NULL;
    	ListNode *cur = head;
    	ListNode *next;
    	while(cur!=NULL){
    		next = cur->next;
    		cur->next = prev;
    		prev = cur;
    		cur = next;
    	}
    	return prev;  
    }
};