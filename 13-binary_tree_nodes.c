#include "binary_trees.h"

/**
 * binary_tree_nodes - that counts node of at least 1 child in a binary tree
 * @tree: is a pointer to root node of tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes, left_tree, right_tree;

	if (tree == NULL)
	{
		return (0);
	}

	left_tree = binary_tree_nodes(tree->left);
	right_tree = binary_tree_nodes(tree->right);
	nodes = 1 + left_tree + right_tree;

	if (tree->left != NULL || tree->right != NULL)
	{
		return (nodes);
	}
	return (left_tree + right_tree);
}
