#include "binary_trees.h"

/**
 * binary_tree_delete - Adds a new node to the binary tree
 * @tree: Pointer to the parent node in the tree
 *
 * Return: null in fail, a new node in success
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

	return (tree);
}
