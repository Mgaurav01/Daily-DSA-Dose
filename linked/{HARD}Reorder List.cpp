https://www.youtube.com/watch?v=meOY1wajrnw
class Solution {
public:
    void reorderList(ListNode* head) {
    if(!head || !head->next) return;
    ListNode *slow = head , *fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *prev = NULL , *cur = slow , *temp;
    while(cur)
    {
        temp = cur -> next;
  cur ->next = prev;
        prev = cur;
         cur = temp;
    }
    ListNode *n1 = head , *n2 = prev;
    while(n2 -> next){
        temp = n1 -> next;
        n1->next = n2;
        n1 = temp;
        temp = n2 -> next;
        n2->next = n1;
        n2 = temp;
    }    
    }
};