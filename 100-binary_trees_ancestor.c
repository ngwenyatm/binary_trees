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
	const binary_tree_t *anc1 = first->parent;
	const binary_tree_t *anc2 = second->parent;

	if (!first || !second)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (first == anc2 || !anc1 || (!anc1->parent && anc2))
	{
		return (binary_trees_ancestor(first, anc2));
	}
	else if (anc1 == second || !anc2 || (!anc2->parent && anc1))
	{
		return (binary_trees_ancestor(anc1, second));
	}
	return (binary_trees_ancestor(anc1, anc2));
}
