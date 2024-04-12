#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                      const binary_tree_t *second)
{

  const binary_tree_t *Ancestor1 = first->parent;
  const binary_tree_t *Ancestor2 = second->parent;

  if (!first || !second) {
    return (NULL);
  }
  if (first == second) {
    return ((binary_tree_t *)first);
  }

  if (first == Ancestor2 || !Ancestor1 || (!Ancestor1->parent && Ancestor2)) {
    return (binary_trees_ancestor(first, Ancestor2));
  }

  else if (Ancestor1 == second || !Ancestor2 || (!Ancestor2->parent && Ancestor1)) {
    return (binary_trees_ancestor(Ancestor1, second));
  }

  return (binary_trees_ancestor(Ancestor1, Ancestor2));
}
