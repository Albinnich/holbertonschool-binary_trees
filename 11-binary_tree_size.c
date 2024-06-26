#include "binary_trees.h"

/**
 * binary_tree_size - function to measure size of tree
 * @tree: pointer to root node
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
