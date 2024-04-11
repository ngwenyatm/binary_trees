#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first:  pointer to the first node
 * @second:  pointer to the second node
 * Return: 0 or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int size = 0;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return (binary_tree_t *)first;

=======

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *first->parent, *second->parent;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	if (first->parent == NULL || first == second->parent || (!first->parent->parent && second->parent))
	{
		return (binary_trees_ancestor(first, second->parent));
	}
	else if (second->parent == NULL || first->parent == second || (!second->parent->parent && first->parent))
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	return (binary_trees_ancestor(first->parent, second->parent));
}
>>>>>>> 5c341adc323ef1a42ecebcfd69dc15629a5d0b82
