#include "binary_trees.h"

/**
 * binary_tree_height - function to measure height
 * @tree: pointer to root node
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
	}
}
