#include "binary_trees.h"

/**
 * binary_tree_height - Calculating the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		left_tree = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_tree = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return ((left_tree > right_tree) ? left_tree : right_tree);
}
