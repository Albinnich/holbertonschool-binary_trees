#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes
 * @tree: pointer to root node
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);
	else if
		(tree->left || tree->right)
			return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
