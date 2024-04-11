#include "binary_trees.h"

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
