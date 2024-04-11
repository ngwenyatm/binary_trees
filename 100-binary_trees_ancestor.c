#include "binary_trees.h"
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

