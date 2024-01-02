#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function inserts a node as the left-child
 * @parent: Pointer to parent node
 * @value: Value to be added to new node
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left == NULL)
		parent->left = newNode;
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	};

	return (newNode);
}
