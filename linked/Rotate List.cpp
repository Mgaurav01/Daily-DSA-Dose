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
    ListNode* rotateRight(ListNode* head, int k) {
     //Edge Cases
      if(head == NULL || head->next == NULL || k == 0) return head;

      int count  = 1 ;
      ListNode *cur = head;
      while(cur->next){
        cur = cur->next;
        count++;
      }

      //make it circular linked List
      cur->next = head;

      //K value can be greater than Length of linkedList
      k = k % count; // if k value is greater the length , it will help to reduce the value
      k = count - k;

      while(k --){
         cur = cur->next;
      }

      head = cur->next;
      cur->next = NULL;

      return head;

    }
};
