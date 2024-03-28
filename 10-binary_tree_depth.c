#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the
 * depth of a node in a binary tree
 * @tree: The pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		c++;
		tree = tree->parent;
	}
	return (c += 0);
}
