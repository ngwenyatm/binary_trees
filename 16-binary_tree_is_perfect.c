#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

		if (tree)
		{
			tree_size = tree_size + 1;

			tree_size = tree_size +  binary_tree_size(tree->left);
			tree_size = tree_size + binary_tree_size(tree->right);
		}
		return (tree_size);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1
			: right_height + 1);
}
/**
 * binary_tree_is_perfect - checks if abinary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	size_t perfect_nodes = (1 << height) - 1;

	return (nodes == perfect_nodes ? 1 : 0);
}
