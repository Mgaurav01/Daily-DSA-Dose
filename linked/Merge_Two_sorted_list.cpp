#include <bits/stdc++.h>
#include<iostream>
using namespace std;
/**
 * Definition for  singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* merge(ListNode* l1 , ListNode* l2)
//     {
//         if(l1 == NULL) return l2;
//         if(l2 == NULL) return l1;
//         if(l1->val < l2->val)
//         {
//             l1->next = merge(l1->next , l2);
//             return l1;
//         }
//         else
//         {
//             l2->next = merge(l1 , l2->next);
//               return l2;
//         }
//     }
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         return merge(list1 , list2);
//     }
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode*ans,*tail;
      if(l1 == NULL) return l2;
      if(l2 == NULL) return l1;
      if(l1->val < l2->val)
      {
          ans = l1;
          tail = l1;
          l1=l1->next;
      }
      else
      {
          ans = l2;
          tail = l2;
          l2=l2->next;
      }
      while(l1 != NULL && l2 != NULL)
      {
          if(l1->val < l2->val)
          {
              tail->next = l1;
              tail = l1;
              l1 = l1->next;
          }
           else
          {
              tail->next = l2;
              tail = l2;
              l2 = l2->next;
          }
      }
      if(l1 == NULL) tail->next = l2;
      else tail->next = l1;
        
      return ans;  
}};