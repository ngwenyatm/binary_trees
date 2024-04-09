#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  if (!tree) {
    return 0;
  }

  size_t left_height = binary_tree_height(tree->left);
  size_t right_height = binary_tree_height(tree->right);

  return ((left_height > right_height) ? left_height : right_height) + 1;
}

