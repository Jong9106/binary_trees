#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Value to parent node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	temp = calloc(1, sizeof(binary_tree_t));
	if (!temp)
		return (NULL);
	temp->parent = parent;
	temp->n = value;
	return (temp);
}
