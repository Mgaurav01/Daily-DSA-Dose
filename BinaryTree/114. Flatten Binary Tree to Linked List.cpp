Recursive Solution

    class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        flatten(root->left);
        flatten(root->right);
        if (root->left)
        {
            TreeNode *right = root->right;
            root->right = root->left;
            root->left = NULL;
            while (root->right)
                root = root->right;
            root->right = right;
        }
    }
};
Iterative Solution(Concept of Morris Treversal)

    class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        TreeNode *curr = root;
        while (curr)
        {
            if (curr->left)
            {
                TreeNode *pre = curr->left;
                while (pre->right)
                {
                    pre = pre->right;
                }
                pre->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};

Using stack class Solution
{
public:
    void flatten(TreeNode *root)
    {
        // empty tree
        if (root == NULL)
            return;

        // use stack to keep storing elements
        stack<TreeNode *> stack;
        stack.push(root);

        // somewhat similar to level order
        // pop each element from the stack (starting from root)
        // add its right and left child to the stack
        //(explained below why right child is added before left)
        // repeat till stack is empty.
        while (!stack.empty())
        {
            TreeNode *currentNode = stack.top();
            stack.pop();

            // push the right node first, because when we pop
            // left child will be on top and we want left child first.
            if (currentNode->right != NULL)
                stack.push(currentNode->right);

            // push left child, this will be on top of stack now.
            if (currentNode->left != NULL)
                stack.push(currentNode->left);

            // assign the top most(left child) as right.
            if (!stack.empty())
                currentNode->right = stack.top();

            // make all left children NULL.
            currentNode->left = NULL;
        }
    }
};