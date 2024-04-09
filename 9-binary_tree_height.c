#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;
	size_t true_h;
	if (!tree)
	{
		return 0;
	}
	size_t left_h = binary_tree_height(tree->left);
	size_t right_h = binary_tree_height(tree->right);
	
	true_h = ((left_height > right_height) ? left_height : right_height) + 1;

	return true_h;
}
