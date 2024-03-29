#include "binary_trees.h"

/**
 * binary_tree_node - Function creates a binary tree node
 * @parent: Pointer to parent node
 * @value: Value to be added to new node
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
