#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height_lhs = binary_tree_height(tree->left);
	size_t height_rhs = binary_tree_height(tree->right);

	if (height_lhs > height_rhs)
		return (height_lhs + 1);
	else
		return (height_rhs + 1);
}
