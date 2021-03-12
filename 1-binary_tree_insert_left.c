#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 *
 * @parent: Pointer to the parent node
 * @value: Value to parent node
 * Return: new node as the left-child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);

	temp = calloc(1, sizeof(binary_tree_t));

	if (!temp)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	if (parent->left)
	{
		temp->left = parent->left;
		temp->left->parent = temp;
	}

	parent->left = temp;
	return (temp);


}
