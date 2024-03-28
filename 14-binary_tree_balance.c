#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree.
 * @tree: is a pointer to the root node of tree.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	return (left_tree - right_tree);
}
