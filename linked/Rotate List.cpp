class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || head->next== NULL) return head;
    int count = 1;
    ListNode *cur = head;
    while(cur->next != NULL)
    {
        count++;
        cur = cur->next;
    }
    cur->next = head;
    k = count - (k % count); //simple means count - k , we write modulas to avoid time Exceed
    while(k--) cur = cur->next;
    head = cur->next;
    cur->next = NULL;
     
    return head;    
   }
};