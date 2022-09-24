/*

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    if(!root) return root;
    TreeNode* temp;
    temp = invertTree(root->left);
    root->left =invertTree(root->right);
    root->right = temp;
    return root;
    }
};

*/

/*
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
     if(root == NULL) return NULL;
     stack<TreeNode*>s;
     s.push(root);
     while(s.size()!=0)
     {
       TreeNode *cur = s.top();
       s.pop();
       if(!cur) continue;
       s.push(cur->left);
       s.push(cur->right);
       swap(cur->left , cur->right);
     }

     return root;
    }
};
*/
