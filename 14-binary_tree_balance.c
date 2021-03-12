#include "binary_trees.h"

/**
 * max - Function to calculate the maximum value
 *
 * @a: number to compare
 * @b: number to compare
 * Return: max value
 */

int max(int a, int b)
{
	return ((a >= b) ? a : b);
}

/**
 * _height - Function to calculate height of the tree
 *
 * @tree: the tree to calculate height
 * Return: height value
 */

int _height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(_height(tree->left), _height(tree->right)));
}

/**
 * height - Function to calculate height of the tree
 *
 * @node: the node to calculate height
 * Return: height value
 */

int height(binary_tree_t *node)
{
	if (!node)
		return (0);

	return (_height(node) - 1);
}

/**
 * binary_tree_balance - Function that measures the balance factor
 *
 * @tree: tree to measure
 * Return: balanca factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftSum, rightSum;

	if (!tree)
		return (0);

	if (tree->left)
		leftSum = height(tree->left);
	else
		leftSum = -1;

	if (tree->right)
		rightSum = height(tree->right);
	else
		rightSum = -1;

	return (leftSum - rightSum);
}
