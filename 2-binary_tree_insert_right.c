#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function inserts a node as the right-child
 * @parent: Pointer to the parent node
 * @value: Value of new node
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	}

	return (newNode);
}
