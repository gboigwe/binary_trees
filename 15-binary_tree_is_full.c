#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: is a pointer to root node of tree.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if ((tree->left) && (tree->right))
	{
		left_tree = binary_tree_is_full(tree->left);
		right_tree = binary_tree_is_full(tree->right);

		return (left_tree && right_tree);
	}
	return (0);
}
