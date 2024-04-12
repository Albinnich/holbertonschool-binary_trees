#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if node
 * is root
 * @node: pointer
 * Return: 1 on success, 0 if fails
 */

int binary_tree_is_root(const binary_tree_t *node)

{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
