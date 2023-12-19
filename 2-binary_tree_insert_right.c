#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of other node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in new node
 *
 * Return: pointer to new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		/* sets old right child as right child of new node */
		parent->right->parent = new_node;
		/* sets new_node as parent of the old right child */
	}

	parent->right = new_node;
	/* sets new_node as right child of parent */

	return (new_node);
}
