#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer
 * Return: 0 or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height, right_height;

        if (tree == NULL)
                return (0);

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        return (left_height > right_height ? left_height + 1 : right_height + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes = binary_tree_size(tree);
	size_t height = binary_tree_height(tree);

	size_t perfect_nodes = (1 << height) - 1;

	return (nodes == perfect_nodes ? 1 : 0);
}
