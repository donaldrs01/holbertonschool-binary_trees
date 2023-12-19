#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of other node
 * @parent: pointer to the node to insert left-child in
 * @value: value to be stored in new node
 *
 * Return: pointer to created node (NULL on failure or if parent NULL)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL); /* return NULL if parent is NULL */
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* return NULL on malloc failure */
	}

	/* Initialize new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Deal with case if parent already has left-child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		/* set old left child as left child of new node */
		parent->left->parent = new_node;
		/* sets new_node as parent of old parent node */

	parent->left = new_node; /* set new_node as left child of parent */

	return (new_node);
}
