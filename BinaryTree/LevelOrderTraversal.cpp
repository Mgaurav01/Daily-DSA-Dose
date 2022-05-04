/*
Problem Statement: Level order traversal of a binary tree

STEPS
1First we insert the root node to the queue.

2.We set our while loop and pop its front element as temp Then we inserted the left child followed by the right child of temp to the queue.

3.Then we push the level value to our ans list.

CODE

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<TreeNode*> q; 
        q.push(root); 
        
        while(!q.empty()) {
          
           int size = q.size();
           vector<int>level;
           for(int i=0;i<size;i++)
           {
               TreeNode *node = q.front();
               q.pop();
               if(node->left != NULL) q.push(node->left);
               if(node->right != NULL) q.push(node->right);
               level.push_back(node->val);
           }
           ans.push_back(level); 
    }
    return ans; 
    }
};
*/


/*
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<TreeNode*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            TreeNode *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->val); 
        }
        return ans; 
    }
};
*/
