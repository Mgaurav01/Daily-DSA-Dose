/*
Core idea here: we merge the 2 trees in place, using t1 as a base (unless it is empty, in which case we just return t2) and summing the values when both have a node present in the same position, recursively calling a dfs helper function to traverse the trees.

When t1 does not have nodes, but t2 has, we just attach the matching node from t2 and move on.

Once done, we return t1.
*/
/*
class Solution {
public:
    void dfs(TreeNode* t1, TreeNode* t2) {
        // we act only if both nodes are present, otherwise do nothing (ie: return)
        if (t1 && t2) {
            // if we have both and t1 was not taken by t2, we sum
            if (t1 != t2) t1->val += t2->val;
            // if t1 misses branches, we attach the ones from t2
            if (!t1->left) t1->left = t2->left;
            if (!t1->right) t1->right = t2->right;
            // recursively we go!
            dfs(t1->left, t2->left);
            dfs(t1->right, t2->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // edge case: empty t1
        if (!t1) return t2;
        dfs(t1, t2);
        return t1;
    }
};
*/
//Then I was like: "wait a moment - when I just attach t2 to make up for missing parts of t1, there is no point in going down, so let's put a conditional before the recursive calls":
/*
class Solution {
public:
    void dfs(TreeNode* t1, TreeNode* t2) {
        // we act only if both nodes are present, otherwise do nothing (ie: return)
        if (t1 && t2) {
            t1->val += t2->val;
            // if t1 misses branches, we attach the ones from t2
            if (!t1->left) t1->left = t2->left;
            if (!t1->right) t1->right = t2->right;
            // recursively we go!
            if (t1->left != t2->left) dfs(t1->left, t2->left);
            if (t1->right != t2->right) dfs(t1->right, t2->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // edge case: empty t1
        if (!t1) return t2;
        dfs(t1, t2);
        return t1;
    }
};
*/
//Finally Code
/*
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // edge case: empty t1
        if (!t1) return t2;
        // mergin when both are present
        if (t1 && t2) {
            t1->val += t2->val;
            // recursively we go!
            t1->left = mergeTrees(t1->left, t2->left);
            t1->right = mergeTrees(t1->right, t2->right);
        }
        return t1;
    }
};
*/

