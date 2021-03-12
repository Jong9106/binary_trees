#include "binary_trees.h"

/**
 * deepTree - Binary tree node
 *
 * @tree: tree to measure
 * Return: deep of the tree
 */

int deepTree(const binary_tree_t *tree)
{
	int deep = 0;

	while (tree != NULL)
	{
		deep++;
		tree = tree->left;
	}
	return (deep);
}

/**
 * _binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: tree to check
 * @deep: deep of the tree
 * @level: current level
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int _binary_tree_is_perfect(const binary_tree_t *tree, int deep, int level)
{
	int left_measure = 0;
	int right_measure = 0;

	if (!tree)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (deep == level + 1);

	if (tree->right == NULL || tree->left == NULL)
		return (0);

	left_measure = _binary_tree_is_perfect(tree->left, deep, level + 1);
	right_measure = _binary_tree_is_perfect(tree->right, deep, level + 1);

	return (left_measure && right_measure);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int deep = 0;

	if (!tree)
		return (0);

	deep = deepTree(tree);

	if (_binary_tree_is_perfect(tree, deep, 0) == 1)
		return (1);
	else
		return (0);
}
