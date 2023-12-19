#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a node on a binary tree
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* return NULL if malloc fails */
	}

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return pointer to new_node */
	return (new_node);
}
