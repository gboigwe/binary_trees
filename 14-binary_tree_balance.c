#include "binary_trees.h"

/**
 * binary_tree_height - Calculating the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_height(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	if (left_tree > right_tree)
	{
		return (left_tree + 1);
	}
	else
	{
		return (right_tree + 1);
	}
}

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
