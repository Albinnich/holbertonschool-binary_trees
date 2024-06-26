#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks
 * if node is a leaf
 * @node: pointer
 * Return: 1 on success, 0 if fails
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
