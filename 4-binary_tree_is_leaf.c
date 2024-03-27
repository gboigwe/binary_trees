#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node has no child and has parent
 * basically if node is leaf
 * @node: The node to be checked
 *
 * Return: 1 if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
