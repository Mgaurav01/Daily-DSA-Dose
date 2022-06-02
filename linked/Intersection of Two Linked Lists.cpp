/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* l1 = headA ;
    ListNode* l2 = headB;
    int n = 0 , m = 0;
    while(l1 != NULL)
    {
        n++;
        l1 = l1->next;
    }
    while(l2 != NULL)
    {
        m++;
        l2 = l2->next;
    }    
    l1 = headA;
    l2 = headB;
        
    if(n>m)
    {
        for(int i = 0; i < n-m ; i++)
        {
            l1=l1->next;
        }
    }
    else
    {
         for(int i = 0; i < m-n ; i++)
        {
            l2=l2->next;
        }
    }
        
     while(l1 != l2)
     {
         l1=l1->next;
         l2=l2->next;
         
     }
     return l1;   
    }
};
*/
/*
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *l1 = headA;
    while(l1 != NULL)
    {  ListNode *l2 = headB;
        while(l2 != NULL)
        {
            if(l1 == l2)
            {
                return l1;
            }
            l2 = l2->next;
        }
        l1 = l1->next;
    }
    return NULL;    
    }
};

*/