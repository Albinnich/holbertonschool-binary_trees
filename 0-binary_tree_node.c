#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary
 * tree node
 * @value: value to put in new node
 * @parent: pointer to parent node
 * Return: pointer to new node on success and NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
