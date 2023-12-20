#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a given node
 * Uncle - the SIBLING of a node's parent
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to uncle node or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL || grandparent == NULL)
	{
		return (NULL);
	}

	if (grandparent->left == node->parent)
		/* node's parent is on left side of grandparent */
	{
		if (grandparent->right != NULL)
		{
			return (grandparent->right); /* return right child of gp (uncle) */
		}
	}
	else
		/* node's parent is on right side of grandparent */
	{
		if (grandparent->left != NULL)
		{
			return (grandparent->left); /* return left child of gp (uncle) */
		}
	}

	return (NULL); /* no uncle found */
}
