#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Adds a new node to the binary tree
 * @node: Pointer to the tree
 *
 * Return: null in fail, a new node in success
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	else
		return (1);
}
