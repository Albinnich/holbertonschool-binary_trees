#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure depth of node
 * @tree: pointer to node
 * Return: always 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
		return (0);

	else
	{
		left_depth = binary_tree_depth(tree->left);
		right_depth = binary_tree_height(tree->right);

		return (1 + (left_depth > right_depth ? left_depth : right_depth));
	}
}
