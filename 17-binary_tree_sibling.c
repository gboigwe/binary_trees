#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling
 *
 * Return: NULL if node or parent is NULL and no sibiling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_left, *node_right;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	if (node->parent->right ==  node)
	{
		return (node->parent->left);
	}

	node_left = binary_tree_sibling(node->parent->left);

	if (node_left != NULL)
		return (node_left);

	node_right = binary_tree_sibling(node->parent->right);

	return (node_right);
}
