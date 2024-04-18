#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure depth of node
 * @tree: pointer to node
 * Return: depth of node if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	if (!tree)
		return (0);
	else if (!tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
