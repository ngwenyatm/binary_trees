#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: sum of nodes with at least 1 child or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	
	if (tree)
	{
		if (tree->left || tree->right)
		{
			nodes++;
		}
		
		nodes = nodes + binary_tree_nodes(tree->left);
		nodes = nodes + binary_tree_nodes(tree->right);
	}
	return nodes;
}
