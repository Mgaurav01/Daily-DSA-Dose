//Using extra space
class Solution {
public:
    Node* copyRandomList(Node* head) {
     unordered_map<Node*,Node*>m;
     Node* temp = head;
      while(temp)
      {
        Node* copy = new Node(temp -> val);
        m[temp] = copy;
        temp = temp->next;
      }
      temp = head;
      
      while(temp)
      {
        m[temp]->next = m[temp->next];
        m[temp]->random = m[temp->random];
        temp=temp->next;
      }
      return m[head];
    }
};
//Without using extra space
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void CopyList(Node* head)
    {
      Node* temp = head;
      Node* n = head->next;
      
      while(temp){
            Node *copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }
    }
    
    void HandleRandom(Node* head)
    {
      Node* temp = head;
      while(temp != NULL)
      {
        if(temp->random)
             temp->next->random= temp->random->next;   
        temp=temp->next->next;
      }
    }
    Node* Detch(Node* head)
    {
      Node* dummy = new Node(-1);
      Node* tail = dummy , *temp = head;
      
      while(temp)
      {
        tail->next = temp->next;
        tail = tail->next;
        temp->next = tail->next;
        temp = temp->next;
      }
      return dummy->next;
    }
    Node* copyRandomList(Node* head) {
      if(!head) return NULL;
      CopyList(head);
      HandleRandom(head);
      return Detch(head);
    }
};