#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves in tree
 * @tree: pointer to root node
 * Return: if tree is NULL return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	else if
		(tree->left == NULL && tree->right == NULL)
			return (1);
	else
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
