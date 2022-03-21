#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//iteraative soluton
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL) return NULL;
        
//         ListNode* prev=NULL;
//         ListNode* cur=head;
//         ListNode* n = head->next;
//         while(cur!=NULL){
//         cur->next = prev;
//             prev = cur;
//             cur = n;
//             if(n!=NULL) n=n->next;
//         }
//         return prev;
//     }
// };
/////////////////////////////////////////////////////////////Recursion/////////////////////////////////////////////////////////////////////////////

// both have same time complexity O(N) but recursion has more space comlexity because it use stack memory O(N)
 
// class Solution {
//     public:
//     ListNode* reverse(ListNode *head)
//     {
//         if(head->next == NULL) return head;
        
//         ListNode *reverseHead = reverse(head->next);
        
//         head->next->next = head;
        
//         head->next = NULL;
        
//         return reverseHead;
//     }
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL) return NULL;
        
//         return reverse(head);
//     }
// };