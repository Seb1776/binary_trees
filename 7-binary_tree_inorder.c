#include "binary_trees.h"

/**
 * binary_tree_inorder - Adds a new node to the binary tree
 * @tree: Pointer to the tree
 * @func: Integer function
 *
 * Return: null in fail, a new node in success
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
