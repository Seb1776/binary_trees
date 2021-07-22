#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a new node to the binary tree
 * @parent: Pointer to the parent node in the tree
 * @value: Data value to the node in the tree
 *
 * Return: null in fail, a new node in success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);

	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = tree;

	parent->right = tree;

	return (tree);
}
