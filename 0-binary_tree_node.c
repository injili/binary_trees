#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * parent: pointer to the parent node
 * value: value to add to the node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	(void) (*newnode);
	(void) (value);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
