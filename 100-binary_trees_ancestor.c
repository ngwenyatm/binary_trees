#include "binary_trees.h"


/**

 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes

 * @first: Pointer to the first node

 * @second: Pointer to the second node

 * Return: Pointer to the lowest common ancestor node, or NULL if none

 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *node, const binary_tree_t *search_for) {
  if (node == NULL || search_for == NULL) {
    return NULL;
  }

 
  if (node == search_for) {
    return (binary_tree_t *)node;
  }

  binary_tree_t *left_ancestor = binary_trees_ancestor(node->left, search_for);
  binary_tree_t *right_ancestor = binary_trees_ancestor(node->right, search_for);

  if (left_ancestor && right_ancestor) {
    return (binary_tree_t *)node;
  }

  return left_ancestor ? left_ancestor : right_ancestor;
}
