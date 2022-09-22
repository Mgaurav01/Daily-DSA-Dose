/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void Find_Path(TreeNode *A , int B , vector<int>v , vector<int> &ans)
{
    if(A== NULL) return;
    v.push_back(A->val);

    if(A->val == B)
    {
        for(int i=0;i<v.size();i++)
          ans.push_back(v[i]);
    }
    Find_Path(A->left, B ,v ,ans);
    Find_Path(A->right, B ,v ,ans);
}
vector<int> Solution::solve(TreeNode* A, int B) {
  vector<int>v ,ans;
  Find_Path(A, B ,v ,ans);
  return ans;
}
