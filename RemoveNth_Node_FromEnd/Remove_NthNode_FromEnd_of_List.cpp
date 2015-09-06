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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int num = 1;
      ListNode* cur = head;
      //count the length of ListNode
      while(cur->next != NULL){
        num++;
        cur = cur->next;
      }

      cur = head;
      if(num != n){
        for(int i=0;i<num-n-1;i++){
          cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = tmp->next;
        delete tmp;
        return head;
      }
      else return head->next;
    }
};
