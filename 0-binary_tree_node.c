#include "binary_trees.h"

/**
 * binary_tree_node - Creating a node
 * @parent: Parent in a node
 * @value: Value of a node
 * Return: The node tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
