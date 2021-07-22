#include "binary_trees.h"

/**
 * binary_tree_postorder - Adds a new node to the binary tree
 * @tree: Pointer to the tree
 * @func: Integer function
 *
 * Return: null in fail, a new node in success
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
