#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures size of tree
 * @tree: is a pointer to root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = binary_tree_size(tree->left);
	right_tree = binary_tree_size(tree->right);

	size = 1 + left_tree + right_tree;

	return (size);
}
