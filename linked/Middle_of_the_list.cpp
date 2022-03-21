#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next ;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                       //OPTIMIZE
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    int n = 0;                                   
    ListNode *fast = head , *slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;      
    }
};  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                     //BRUTE Forces
/**
class Solution {
public:
    ListNode* middleNode(ListNode* head) {  
    int n = 0;
    ListNode* temp = head;
    while(temp != NULL)
    {
        n++;       //NOT GOOD BECAUSE USE TWO ITERATION
        temp = temp->next;
    }    
    int half = n/2;
    temp = head;
    while(half--)
    {
    temp = temp->next;
    }
        
    return temp; 

    }
    };
    **/