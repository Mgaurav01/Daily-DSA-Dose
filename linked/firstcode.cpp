#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
     int data ;
     Node* next;
};
//function to print 
void printlist(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        //cout<<endl;
        head = head->next;
    }
}
//function to insert from front ;
void push(Node** head_ref , int new_data)
{
    /* Given a reference (pointer to pointer)
    to the head of a list and an int,
    inserts a new node on the front of the list. */

    Node* new_node = new Node();

    new_node -> data = new_data;

    new_node -> next = (*head_ref);

  /* 4. move the head to point to the new node */

    (*head_ref) = new_node; 
}
void insert_at(Node* pre_node , int new_data)
{
    if(pre_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
   Node* new_node = new Node();

   new_node -> data = new_data;

   new_node -> next = pre_node -> next;

   pre_node -> next = new_node;

}
void append(Node** head_ref , int new_data)
{
    Node* new_node = new Node();

    Node *last = *head_ref;

    new_node -> data = new_data;

    new_node -> next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;

    return ;

}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
   second = new Node();
   third =  new Node();

    head ->data = 1;
    head -> next = second;

    second ->data = 2;
    second ->next = third;

    third -> data = 3;
    third -> next = NULL;

    printlist(head); //1,2,3

    push(&head , 5);

    printlist(head); //5,1,2,3

    insert_at(head->next , 4); 

    printlist(head);//5,1,4,2,3

    append(&head , 9);

    printlist(head);//5,1,4,2,3,9    

    return 0;
}