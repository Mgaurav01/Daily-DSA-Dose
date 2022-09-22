https://www.youtube.com/watch?v=meOY1wajrnw
class Solution {
public:
    ListNode *reverse(ListNode *head){
    ListNode* prev = NULL;
    ListNode* cur = head;

    ListNode* nexxt ;

    while(cur)
    {
      nexxt = cur -> next;
      cur->next= prev;
      prev = cur;
      cur = nexxt;
    }
    return prev;
    }
    void reorderList(ListNode* head) {
      ListNode* slow = head , *fast = head;
      while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
      }
      ListNode* h2 = slow->next;
      slow->next = NULL;

       //step2 : Reverse linked List
     ListNode* head2 = reverse(h2);

      //step 3: Merge 2 Linked List
      ListNode* h = head;
      while(head2)
      {
        ListNode *temp = head2 -> next;
        head2 -> next = h -> next;
        h -> next = head2;
        head2 = temp;
        h = h ->next ->next;
      }

    }
};
