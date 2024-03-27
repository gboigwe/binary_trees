#include "binary_trees.h"

/**
 * binary_tree_is_root - Function to check if a given node is root
 * @node: The node to be checked
 *
 * Return: 1 if node is a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
