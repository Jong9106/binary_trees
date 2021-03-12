#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 *
 * @node: node to check
 * Return: Pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent ||
	!node->parent->parent ||
	!node->parent->parent->left ||
	!node->parent->parent->right)
	{
		return (NULL);
	}

	if (node->parent->parent->left->n == node->parent->n ||
	node->parent->parent->right->n == node->parent->n)
	{
		if (node->parent->parent->left->n == node->parent->n)
		{
			return (node->parent->parent->right);
		}
		else if (node->parent->parent->right->n == node->parent->n)
		{
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
