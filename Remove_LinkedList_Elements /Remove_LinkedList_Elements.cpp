/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
 public:
     ListNode* removeElements(ListNode* head, int val) {
       if (head == NULL){
             return head;
         }
       ListNode* cur = head;
       while(cur->next != NULL){
         if(cur->next->val == val){
           cur->next = cur->next->next;
         }
         else{
           cur = cur->next;
         }
       }
       if (head->val==val)
       head=head->next;

       return head;
       delete cur;
     }
 };
