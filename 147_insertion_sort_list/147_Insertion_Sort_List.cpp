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
     ListNode* insertionSortList(ListNode* head) {
       ListNode *dummy = new ListNode(0);
       ListNode *cur = head;
       while (cur!=NULL) {
         /* code */
         ListNode *pre = dummy;
         while(pre->next != NULL&&pre->next->val < cur->val){
           pre = pre->next;
         }
         ListNode *curnext = cur->next;
         cur->next = pre->next;
         pre->next = cur;
         cur = curnext;
       }
       return dummy->next;
     }
 };
