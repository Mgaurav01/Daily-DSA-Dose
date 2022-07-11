//Using preOrder Traversal
// class Solution {
// public:
//     int level = 0;
//     void reversepreOrder(TreeNode* root , vector<int>&ans ,int level)
//     {
//         if(root == NULL) return ;
//         if(level == ans.size()) 
//             ans.push_back(root->val);
//         reversepreOrder(root->right , ans , level + 1);
//         reversepreOrder(root->left , ans , level + 1);
        
//     }
//     vector<int> rightSideView(TreeNode* root) {
//     vector<int> ans;
//         reversepreOrder(root , ans , level);
//         return ans;
//     }
    
// };