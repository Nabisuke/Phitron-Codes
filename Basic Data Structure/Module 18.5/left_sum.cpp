#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	if (root == NULL)
	{
		return 0;
	}
    
	long long int ans = 0;
	if (root->left)
	{
		ans += root->left->data;
	}

	ans += leftSum(root->left);
	ans += leftSum(root->right);
	return ans;
		
}