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
        return (0);
    }
    left_h = binary_tree_height(tree->left);
    right_h = binary_tree_height(tree->right);

    true_h = (left_h > right_h ? left_h + 1: right_h + 1);

    return (true_h);
}
