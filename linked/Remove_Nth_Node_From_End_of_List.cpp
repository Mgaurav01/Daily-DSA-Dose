class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode(); // very imp point otherwise it will show null pointer error
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL) 
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
    
};
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
/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if((head==NULL) ||(head->next==NULL) ) return NULL;
            ListNode* first=head,*prev=NULL;
            for(int i=1;i<=n;i++)
                  {  prev=first;
                     first=first->next;   
                  }
            if(prev->next==NULL) // When nth node from last is head node
                 {
				    ListNode* t=head;   
                    head=head->next;
                    delete(t);
                    return head;
                 }
           ListNode*second=head;
           while(first->next!=NULL)
            {
              first=first->next;
              second=second->next;
            }
          ListNode* t=second->next;
          second->next=t->next;
          delete(t);
          return head;
        
    }
};
*/