#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that
 * inserts node as left-child of another node
 * @parent: pointer
 * @value: value to store in new node
 * Return: pointer to created node or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (0);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
