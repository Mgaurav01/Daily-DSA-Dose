#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

 
int height(node*root)
{
        if(root==NULL)
            return 0;
        int ls=height(root->left);
        int rs=height(root->right);
        return max(ls,rs)+1;
}
int sum(node*root, int h, int k)
    {
        if(root==NULL)
            return 0;
        if(h==k)
            return root-> data;
        return sum(root->left,h,k+1)+sum(root->right,h,k+1);
    }
int deepestLeavesSum(node* root) 
    {
        int h=height(root);
        return sum(root,h,1);
    }
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}
int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root->right->right = newNode(6);
  root->right->right->right = newNode(8);
  root->left->left->left = newNode(7);
  int sum = deepestLeavesSum(root);
  cout<<sum ;
  return 0;
}  
