/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
      if(depth == 1){
        TreeNode *newNode = new TreeNode(val);
        newNode->left = root;
        return newNode;
      }
      queue<TreeNode*>q;
      q.push(root);
      int count = 0;
      while(!q.empty()){
       int size = q.size();
        count++;
       for(int i=0;i<size;i++)
       {
         TreeNode *cur = q.front();
         q.pop();
         if(count != depth-1)
         {
           if(cur->left != NULL) q.push(cur->left);
           if(cur->right != NULL) q.push(cur->right);
         }
         else
         {
           TreeNode *newNode1 = new TreeNode(val);
           newNode1->left = cur->left;
           cur->left = newNode1;

           TreeNode *newNode2 = new TreeNode(val);
           newNode2->right = cur->right;
           cur->right = newNode2;
         }
       }
      }
     return root;
    }
};
