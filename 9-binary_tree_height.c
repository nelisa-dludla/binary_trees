#include "binary_trees.h"

/**
 * max_height - Function determines the larger value between two values
 * @a: Value to be compared with b
 * @b: Value to be compared with a
 * Return: Largest value
 */

size_t max_height(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = 0;

	if (tree->parent != NULL)
		height++;

	size_t height_lhs = binary_tree_height(tree->left);
	size_t height_rhs = binary_tree_height(tree->right);

	return max_height(height_lhs, height_rhs);
}
