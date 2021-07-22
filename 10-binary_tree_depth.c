#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth a node in binary tree
 * @tree: pointer to binary tree
 *
 * Return: position
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->parent)
			left = binary_tree_depth(tree->parent) + 1;

		if (tree->parent)
			right = binary_tree_depth(tree->parent) + 1;

		if (left > right)
			return (left);

		else
			return (right);
	}
}
