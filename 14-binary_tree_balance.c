#include "binary_trees.h"

/**
 * binary_tree_height - that measuers the height of a binary tree
 * @tree: pointer to binary tree
 *
 * Return: long
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to binary tree
 *
 * Return: 0 if null or the difference between left and right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	return (left - right);
}
