/*
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return 0;
        ListNode *tmp = head;
        while(tmp->next){
            if(tmp->val == tmp->next->val){
                tmp->next = tmp->next->next;
            }
            else{
                tmp = tmp->next;
            }
        }
        return head;
    }
};