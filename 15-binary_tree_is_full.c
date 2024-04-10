#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 If tree is NULL
 *         Otherwise 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		if (binary_tree_is_full(tree->left) == 0 || binary_tree_is_full(tree->right) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
