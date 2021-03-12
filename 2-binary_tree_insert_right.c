#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 *
 * @parent: Pointer to the parent node
 * @value: Value to parent node
 * Return: New node as the right-child
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

if (!parent)
	return (NULL);

temp = calloc(1, sizeof(binary_tree_t));

if (!temp)
	return (NULL);

temp->n = value;
temp->parent = parent;
if (parent->right)
{
	temp->right = parent->right;
	temp->right->parent = temp;
}

parent->right = temp;
return (temp);
}
