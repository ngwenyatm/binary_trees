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


  l_height = binary_tree_height(tree->left);

  r_height = binary_tree_height(tree->right);

  if (l_height > r_height) {
    return l_height + 1;
  } else {
    return r_height + 1;
  }
}
}
