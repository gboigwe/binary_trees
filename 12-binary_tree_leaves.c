#include "binary_trees.h"

/**
 * binary_tree_leaves - Function to count leaf in a binary tree
 * @tree: is a pointer to root node of a tree to count leaf
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);

	return (left_tree + right_tree);
}
