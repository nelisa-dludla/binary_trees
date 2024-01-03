#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a tree
 * @tree: Pointer to the node
 * Return: Depth of node || 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
