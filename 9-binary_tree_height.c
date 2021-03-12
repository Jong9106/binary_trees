#include "binary_trees.h"

/**
 * _binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: tree to measure
 * Return: size of the tree
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree)
		return (0);

	lheight = _binary_tree_height(tree->left);
	rheight = _binary_tree_height(tree->right);

	if (lheight > rheight)
	{
		return (lheight + 1);
	}
	else
	{
		return (rheight + 1);
	}
}

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: tree to preorder
 * Return: size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (_binary_tree_height(tree) - 1);
}
