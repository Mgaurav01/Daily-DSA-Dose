/*
int floorInBST(TreeNode<int> * root, int x)
{
    // Write your code here.
	int floor = -1;
	while(root)
	{
		if(root -> val == x)
		{
			floor = root -> val;
			return floor;	
		}
		if(x  > root -> val )
		{
			floor = root -> val;
			root  = root -> right;
		}
		else
		{
			root = root -> left;
		}
	}
	return floor;
}
*/