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
    void deleteNode(ListNode* node) {
      if(node == NULL){
        delete node;
      }
      if(node->next != NULL){
        node->val = node->next->val;
        ListNode* tmp = node->next;
        node->next = tmp->next;
        delete tmp;
      }
    }
};
