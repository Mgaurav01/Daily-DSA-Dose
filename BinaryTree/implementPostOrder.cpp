/* RECURSION */
/*
class Solution {
public:
    void postOrderTrav(TreeNode *root , vector<int> &postOrder)
    {
        if(root == NULL)
            return;
        postOrderTrav(root->left , postOrder);
        postOrderTrav(root->right , postOrder);
        postOrder.push_back(root -> val);
    }    
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>postOrder;
    postOrderTrav(root , postOrder);    
    return postOrder;
    }
};
*/