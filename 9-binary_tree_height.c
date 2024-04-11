#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0;
		size_t r_height = 0;

		l_height = tree->left ? (binary_tree_height(tree->left) + 1) : 0;
		r_height = tree->right ? (binary_tree_height(tree->right) + 1) : 0;
		return ((l_height > r_heighht) ? l_height : r_height);
	}
	return (0);
}

