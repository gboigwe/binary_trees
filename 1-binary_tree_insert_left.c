#include "binary_trees.h"

/**
 * binary_tree_insert_left - Node parent to the left node child
 * If node parent to left child exist, move it down and add to left
 * @parent: Parent in a node
 * @value: Value of a node
 *
 * Return: The node to left tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
