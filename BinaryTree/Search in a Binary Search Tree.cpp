/*
Example 1:
            4
        2       7
      1    3
Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]
*/
/*
Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null
*/
/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
    while(root)
    {
        if(root->val == val) return root;
        if(root->val >= val) root=root->left;
            else root=root->right;
    }
      return NULL;  
    }
};
*/