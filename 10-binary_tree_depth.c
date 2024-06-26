#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node or 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
