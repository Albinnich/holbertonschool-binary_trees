#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure balance
 * factor
 * @tree: pointer to root node
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures height
 * @tree: pointer to the root node
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));
}
