#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child
 *
 * @tree: tree to count
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right || tree->left)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	return (0);
}
