//Approch one by using vector

/*
Time Complexity : O(N)
Space Complexity : O(N)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
    vector<ListNode*> store;
    while(head)
    {
        store.push_back(head);
        head = head->next;
    }
    int j = store.size() - 1;
    for(int i=0; i < store.size()/2 ;i++)
    {
        if(store[i]->val != store[j]->val) return false;
        j--;
    }
    return true;    
    }
};
*/

//Second Approch 
// 1. Find the middle of the linked list.
// 2. Reverse the linked list after the middle node.
// 3. Join the reversed linked list after the middle node.
// 4. Check from the starting node(i.e. head) and middle node:

// if any value gets mismatched return false
// else return true

/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        if(!head->next)  return true;
        while(fast->next && fast->next->next){              // finding middle of linked list 
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*prev=NULL,*curr=slow->next,*temp;
        while(curr!=NULL){                                 // reversing the linked list after the middle node
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        slow->next=prev;                                   // joining the reversed linked list after the middle node
        ListNode *start=head,*mid=slow->next;
        while(mid){                                        // valued being checked here
            if(start->val!=mid->val) return false;
            start=start->next;
            mid=mid->next;
        }
        return true;
    }
};
Time Complexity : O(N)
Space Complexity : O(1)
*/