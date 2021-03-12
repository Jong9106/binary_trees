#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: tree to check
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull = 0;
	int rfull = 0;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	lfull = binary_tree_is_full(tree->left);
	rfull = binary_tree_is_full(tree->right);

	if (tree->left && tree->right)
	{
		if (1 == lfull && 1 == rfull)
			return (1);
	}
	return (0);
}
