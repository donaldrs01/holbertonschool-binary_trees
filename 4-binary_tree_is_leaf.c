#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * (a leaf is a node that has no children)
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->left == NULL && node->right == NULL);
	/* returns 1 if node has no left or right children */
}
