#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child of another node
 * @parent: the pointer to the parent node
 * @value: the value to insert in the desired node
 *
 * Return: the pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	return (newnode);
}
