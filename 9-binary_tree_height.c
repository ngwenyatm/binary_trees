#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree) {
  // Check if the tree is empty (NULL pointer)
  if (!tree) {
    return 0;
  }

  // Calculate height of left subtree recursively
  size_t left_height = binary_tree_height(tree->left);

  // Calculate height of right subtree recursively
  size_t right_height = binary_tree_height(tree->right);

  // Determine the maximum height
  if (left_height > right_height) {
    return left_height + 1;
  } else {
    return right_height + 1;
  }
}
