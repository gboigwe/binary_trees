#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a binary tree
 * in a traversal preorder way
 * @tree: This is a pointer to root node of a tree in traverse
 * @func: This is a pointer to a function calling a node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
