#include "binary_trees.h"

/**
 * binary_tree_is_root - Function checks if a given node is a root
 * @node: Node to be checked
 * Return: 1 if node is root || Otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
