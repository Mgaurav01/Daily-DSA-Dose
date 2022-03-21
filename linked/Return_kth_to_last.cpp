#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node {
      int val;
      Node *next;
      //ListNode(int x) : val(x), next(NULL) {}
  };
void insert(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->val = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
void display(Node *head)
{
  Node *cur  = head;
  while(cur != NULL)
    {
      cout<<cur->val;
      cur=cur->next;
    }
}
// int length(Node *head )     //Brute force
// {
//   Node *cur = head;
//   int length = 0;
//   while(cur != NULL)
//     {
//       length++;
//       cur = cur->next;
//     }
//   return length;
// }


// int nthValue(Node *head , int k)       //Brute Force
// {
//   int index = 0;
//   int n = length(head);
//   Node *cur = head;
//   while(cur != NULL)
//     {
//       if(index == (n - k))
//       {
//         return cur->val;
//       }
//       index++;
//       cur = cur->next;
//     }
//   return -1;
// }

void nthValue(Node *head , int k)          //optimal
{
  Node *fast = head , *slow = head;
  for(int i=0;i<k;i++)
    {
      fast = fast->next;
    }
  while(fast  != NULL)
    {
      fast = fast->next;
      slow = slow->next;
    }
  cout<<slow->val;
  return slow;
}
int main()
{
   Node* head = NULL;
   insert(&head , 1);
   insert(&head , 2);
   insert(&head , 4);
   insert(&head , 5);
   insert(&head , 7);
   insert(&head , 9);
   insert(&head , 3);
   display(head);
  cout<<endl;
  //cout<<length(head);
  cout<<endl<<"Enter Kth";
  int k; cin>>k;
  cout<<"Answer";
  nthValue(head , k);
  return 0;
  }

    
