#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, else 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_length;

	if (tree == NULL)
	{
		return (0);
	}

	perfect_length = binary_tree_size(tree);
	return ((perfect_length & (perfect_length + 1)) == 0);
}
